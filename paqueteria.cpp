#include <iostream>
#include <string>

// Clase base para representar un empleado
class Empleado {
protected:
    std::string nombre;  // Nombre del empleado
    int id;              // ID del empleado

public:
    Empleado(std::string nom, int i) : nombre(nom), id(i) {}

    virtual void mostrarInfo() const {
        std::cout << "Empleado: " << nombre << "\nID: " << id << std::endl;
    }
};

// Clase derivada de Empleado, representando un chofer
class Chofer : public Empleado {
private:
    std::string licencia;  // Licencia del chofer

public:
    Chofer(std::string nom, int i, std::string lic) : Empleado(nom, i), licencia(lic) {}

    void mostrarInfo() const override {
        Empleado::mostrarInfo();
        std::cout << "Licencia: " << licencia << std::endl;
    }
};

// Clase para representar un paquete
class Paquete {
private:
    std::string destinatario;  // Nombre del destinatario del paquete
    std::string direccion;     // Dirección del destinatario
    double peso;               // Peso del paquete

public:
    Paquete(std::string dest, std::string dir, double p) 
        : destinatario(dest), direccion(dir), peso(p) {}

    void mostrarInfo() const {
        std::cout << "Destinatario: " << destinatario 
                  << "\nDirección: " << direccion 
                  << "\nPeso: " << peso << " kg" << std::endl;
    }
};

// Clase para representar un vehículo
class Vehiculo {
private:
    std::string placa;   // Placa del vehículo
    std::string modelo;  // Modelo del vehículo

public:
    Vehiculo(std::string pl, std::string mod) : placa(pl), modelo(mod) {}

    void mostrarInfo() const {
        std::cout << "Placa: " << placa 
                  << "\nModelo: " << modelo << std::endl;
    }
};

// Clase para representar una empresa de paquetería que usa composición y agregación
class EmpresaPaqueteria {
private:
    Paquete paquete;       // Composición
    Empleado* empleado;    // Agregación
    Vehiculo* vehiculo;    // Agregación

public:
    EmpresaPaqueteria(std::string dest, std::string dir, double p, Vehiculo* v, Empleado* emp)
        : paquete(dest, dir, p), vehiculo(v), empleado(emp) {}

    void mostrarInfo() const {
        std::cout << "\n=== Información del Paquete ===\n";
        paquete.mostrarInfo();

        std::cout << "\n=== Información del Vehículo ===\n";
        vehiculo->mostrarInfo();

        std::cout << "\n=== Información del Empleado ===\n";
        if (empleado) {
            empleado->mostrarInfo();
        } else {
            std::cout << "No hay empleado asignado.\n";
        }
    }
};

int main() {
    // Variables para almacenar los datos ingresados por el usuario
    std::string destinatario, direccion, placa, modelo, nombre, licencia;
    int id;
    double peso;

    // Solicitar datos del paquete
    std::cout << "=== Registro de Paquete ===\n";
    std::cout << "Ingrese el destinatario del paquete: ";
    std::getline(std::cin, destinatario);
    std::cout << "Ingrese la dirección del paquete: ";
    std::getline(std::cin, direccion);

    // Validar que el peso sea mayor a 0
    do {
        std::cout << "Ingrese el peso del paquete (kg): ";
        std::cin >> peso;
        if (peso <= 0) {
            std::cout << "Error: El peso debe ser mayor a 0. Por favor, ingrese un valor válido.\n";
        }
    } while (peso <= 0);
    std::cin.ignore(); 

    // Solicitar datos del vehículo
    std::cout << "\n=== Registro de Vehículo ===\n";
    std::cout << "Ingrese la placa del vehículo: ";
    std::getline(std::cin, placa);
    std::cout << "Ingrese el modelo del vehículo: ";
    std::getline(std::cin, modelo);

    // Solicitar datos del chofer
    std::cout << "\n=== Registro del Chofer ===\n";
    std::cout << "Ingrese el nombre del chofer: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el ID del chofer: ";
    std::cin >> id;
    std::cin.ignore(); 
    std::cout << "Ingrese la licencia del chofer: ";
    std::getline(std::cin, licencia);

    // Crear los objetos necesarios
    Vehiculo vehiculo1(placa, modelo);
    Chofer chofer1(nombre, id, licencia);

    // Crear la empresa de paquetería con los objetos creados
    EmpresaPaqueteria empresa1(destinatario, direccion, peso, &vehiculo1, &chofer1);

    // Mostrar la información completa
    std::cout << "\n=== Información Completa ===\n";
    empresa1.mostrarInfo();

    return 0;
}


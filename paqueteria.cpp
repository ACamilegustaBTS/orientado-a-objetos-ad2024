#include <iostream>
#include <string>

// Clase base para representar un empleado
class Empleado {
protected:
    std::string nombre;  // Nombre del empleado
    int id;              // ID del empleado

public:
    // Constructor que inicializa el nombre y el ID del empleado
    Empleado(std::string nom, int i) : nombre(nom), id(i) {}

    // Método para mostrar la información del empleado
    virtual void mostrarInfo() const {
        std::cout << "Empleado: " << nombre << ", ID: " << id << std::endl;
    }
};

// Clase derivada de Empleado, representando un chofer
class Chofer : public Empleado {
private:
    std::string licencia;  // Licencia del chofer

public:
    // Constructor que inicializa el nombre, ID y licencia del chofer
    Chofer(std::string nom, int i, std::string lic) : Empleado(nom, i), licencia(lic) {}

    // Método para mostrar la información del chofer
    void mostrarInfo() const override {
        Empleado::mostrarInfo();  // Llama al método de la clase base
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
    // Constructor que inicializa el destinatario, dirección y peso
    Paquete(std::string dest, std::string dir, double p) 
        : destinatario(dest), direccion(dir), peso(p) {}

    // Método para mostrar la información del paquete
    void mostrarInfo() const {
        std::cout << "Destinatario: " << destinatario << ", Dirección: " << direccion 
                  << ", Peso: " << peso << " kg" << std::endl;
    }
};

// Clase para representar un vehículo
class Vehiculo {
private:
    std::string placa;   // Placa del vehículo
    std::string modelo;  // Modelo del vehículo

public:
    // Constructor que inicializa la placa y el modelo del vehículo
    Vehiculo(std::string pl, std::string mod) : placa(pl), modelo(mod) {}

    // Método para mostrar la información del vehículo
    void mostrarInfo() const {
        std::cout << "Placa: " << placa << ", Modelo: " << modelo << std::endl;
    }
};

// Clase para representar una empresa de paquetería que usa composición y agregación
class EmpresaPaqueteria {
private:
    Paquete paquete;       // Composición
    Empleado* empleado;    // Agregación
    Vehiculo* vehiculo;    // Agregación

public:
    // Constructor de la empresa que recibe el paquete, el vehículo y el empleado
    EmpresaPaqueteria(std::string dest, std::string dir, double p, Vehiculo* v, Empleado* emp)
        : paquete(dest, dir, p), vehiculo(v), empleado(emp) {}

    // Método para mostrar la información de todos los objetos asociados
    void mostrarInfo() const {
        paquete.mostrarInfo();  // Muestra la información del paquete
        vehiculo->mostrarInfo(); // Muestra la información del vehículo
        if (empleado) {
            empleado->mostrarInfo(); // Muestra la información del empleado si existe
        }
    }
};

// Función principal que ejecuta el programa
int main() {
    // Variables para almacenar los datos ingresados por el usuario
    std::string destinatario, direccion, placa, modelo, nombre, licencia;
    int id;
    double peso;

    // Solicitar datos del paquete
    std::cout << "Ingrese el destinatario del paquete: ";
    std::getline(std::cin, destinatario);
    std::cout << "Ingrese la dirección del paquete: ";
    std::getline(std::cin, direccion);
    std::cout << "Ingrese el peso del paquete (kg): ";
    std::cin >> peso;
    std::cin.ignore(); 

    // Solicitar datos del vehículo
    std::cout << "Ingrese la placa del vehículo: ";
    std::getline(std::cin, placa);
    std::cout << "Ingrese el modelo del vehículo: ";
    std::getline(std::cin, modelo);

    // Solicitar datos del chofer
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
    std::cout << "\nInformación del Paquete, Vehículo y Empleado:\n";
    empresa1.mostrarInfo();

    return 0;
}

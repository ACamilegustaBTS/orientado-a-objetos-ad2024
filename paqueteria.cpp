#include <iostream>
#include <string>

// Clase base para herencia
class Persona {
private:
    std::string nombre; 
public:
    // Constructor que inicializa el nombre
    Persona(std::string nom) : nombre(nom) {}
    std::string getNombre() const { return nombre; }
    void setNombre(const std::string& nom) { nombre = nom; }
    virtual void mostrarInfo() const {
        std::cout << "Nombre: " << nombre << std::endl;
    }
};

// Clase derivada que hereda de Persona
class Empleado : public Persona {
private:
    int id; 
public:
    // Constructor que inicializa el nombre y el ID
    Empleado(std::string nom, int i) : Persona(nom), id(i) {}
    int getId() const { return id; }
    void setId(int i) { id = i; }
    void mostrarInfo() const override {
        Persona::mostrarInfo();
        std::cout << "ID: " << id << std::endl;
    }
};

// Clase para representar información general del destino
class Informacion {
private:
    std::string destino;
public:
    // Constructor que inicializa el destino
    Informacion(std::string dest) : destino(dest) {}
    std::string getDestino() const { return destino; }
    void setDestino(const std::string& dest) { destino = dest; }
    virtual void mostrarInfo() const {
        std::cout << "Destino: " << destino << std::endl;
    }
};

// Clase derivada que hereda de Informacion
class Paquete : public Informacion {
private:
    std::string direccion; 
    double peso;          
public:
    // Constructor que inicializa el destinatario, la dirección y el peso
    Paquete(std::string dest, std::string dir, double p) 
        : Informacion(dest), direccion(dir), peso(p) {}
    std::string getDireccion() const { return direccion; }
    double getPeso() const { return peso; }
    void setDireccion(const std::string& dir) { direccion = dir; }
    void setPeso(double p) { peso = p; }
    void mostrarInfo() const override {
        Informacion::mostrarInfo();
        std::cout << "Dirección: " << direccion << std::endl;
        std::cout << "Peso: " << peso << " kg" << std::endl;
    }
};

// Clase para representar un vehículo
class Vehiculo {
private:
    std::string placa;  
    std::string modelo; 
public:
    // Constructor que inicializa la placa y el modelo
    Vehiculo(std::string pl, std::string mod) : placa(pl), modelo(mod) {}
    std::string getPlaca() const { return placa; }
    std::string getModelo() const { return modelo; }
    void setPlaca(const std::string& pl) { placa = pl; }
    void setModelo(const std::string& mod) { modelo = mod; }
    void mostrarInfo() const {
        std::cout << "Placa: " << placa << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
    }
};

// Función principal
int main() {
    std::string nombre;
    int id;

    // Solicitar al usuario que ingrese los detalles del empleado
    std::cout << "Ingrese el nombre del empleado: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el ID del empleado: ";
    std::cin >> id;

    // Crear un objeto Empleado con los datos ingresados
    Empleado empleado1(nombre, id);

    std::cin.ignore(); 

    std::string destinatario;
    std::string direccion;
    double peso;

    // Solicitar al usuario que ingrese los detalles del paquete
    std::cout << "Ingrese el destinatario del paquete: ";
    std::getline(std::cin, destinatario);
    std::cout << "Ingrese la dirección del paquete: ";
    std::getline(std::cin, direccion);
    std::cout << "Ingrese el peso del paquete (kg): ";
    std::cin >> peso;

    // Crear un objeto Paquete con los datos ingresados
    Paquete paquete1(destinatario, direccion, peso);

    std::cin.ignore(); 

    std::string placa;
    std::string modelo;

    // Solicitar al usuario que ingrese los detalles del vehículo
    std::cout << "Ingrese la placa del vehículo: ";
    std::getline(std::cin, placa);
    std::cout << "Ingrese el modelo del vehículo: ";
    std::getline(std::cin, modelo);

    // Crear un objeto Vehiculo con los datos ingresados
    Vehiculo vehiculo1(placa, modelo);

    // Mostrar la información de cada objeto
    std::cout << "\nInformación del Empleado:\n";
    empleado1.mostrarInfo();
    std::cout << "\nInformación del Paquete:\n";
    paquete1.mostrarInfo();
    std::cout << "\nInformación del Vehículo:\n";
    vehiculo1.mostrarInfo();

    return 0;
}

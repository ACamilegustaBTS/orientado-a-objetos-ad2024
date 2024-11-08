#include <iostream>
#include <string>

//Clase paquete
class Paquete {
private:
    std::string destinatario;
    std::string direccion;
    double peso;

public:
    Paquete(std::string dest, std::string dir, double p) 
        : destinatario(dest), direccion(dir), peso(p) {}

    void mostrarInfo() {
        std::cout << "Destinatario: " << destinatario << std::endl;
        std::cout << "Direccion: " << direccion << std::endl;
        std::cout << "Peso: " << peso << " kg" << std::endl;
    }
};

//Clase vehículo
class Vehiculo {
private:
    std::string placa;
    std::string modelo;

public:
    Vehiculo(std::string pl, std::string mod) : placa(pl), modelo(mod) {}

    void mostrarInfo() {
        std::cout << "Placa: " << placa << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
    }
};

//Clase empleado
class Empleado {
private:
    std::string nombre;
    int id;

public:
    Empleado(std::string nom, int i) : nombre(nom), id(i) {}

    void mostrarInfo() {
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "ID: " << id << std::endl;
    }
};

int main() {
    std::string destinatario;
    std::string direccion;
    double peso;

    std::cout << "Ingrese el destinatario del paquete: ";
    std::getline(std::cin, destinatario);
    std::cout << "Ingrese la direccion del paquete: ";
    std::getline(std::cin, direccion);
    std::cout << "Ingrese el peso del paquete (kg): ";
    std::cin >> peso;

    Paquete paquete1(destinatario, direccion, peso);

    std::cin.ignore();  

    std::string placa;
    std::string modelo;

    std::cout << "Ingrese la placa del vehiculo: ";
    std::getline(std::cin, placa);
    std::cout << "Ingrese el modelo del vehiculo: ";
    std::getline(std::cin, modelo);

    Vehiculo vehiculo1(placa, modelo);

    std::string nombre;
    int id;

    std::cout << "Ingrese el nombre del empleado: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el ID del empleado: ";
    std::cin >> id;

    Empleado empleado1(nombre, id);

    std::cout << "\nInformacion del Paquete:\n";
    paquete1.mostrarInfo();
    std::cout << "\nInformacion del Vehiculo:\n";
    vehiculo1.mostrarInfo();
    std::cout << "\nInformacion del Empleado:\n";
    empleado1.mostrarInfo();

    return 0;
}
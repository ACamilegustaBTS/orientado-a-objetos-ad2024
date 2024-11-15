#include <iostream>
#include <string>

class Paquete {
private:
    std::string destinatario;
    std::string direccion;
    double peso;

public:
    Paquete(std::string dest, std::string dir, double p) 
        : destinatario(dest), direccion(dir), peso(p) {}

    std::string getDestinatario() const { return destinatario; }
    std::string getDireccion() const { return direccion; }
    double getPeso() const { return peso; }

    void setDestinatario(const std::string& dest) { destinatario = dest; }
    void setDireccion(const std::string& dir) { direccion = dir; }
    void setPeso(double p) { peso = p; }

    void mostrarInfo() const {
        std::cout << "Destinatario: " << destinatario << std::endl;
        std::cout << "Dirección: " << direccion << std::endl;
        std::cout << "Peso: " << peso << " kg" << std::endl;
    }
};

class Vehiculo {
private:
    std::string placa;
    std::string modelo;

public:
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

class Empleado {
private:
    std::string nombre;
    int id;

public:
    Empleado(std::string nom, int i) : nombre(nom), id(i) {}

    std::string getNombre() const { return nombre; }
    int getId() const { return id; }

    void setNombre(const std::string& nom) { nombre = nom; }
    void setId(int i) { id = i; }

    void mostrarInfo() const {
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
    std::cout << "Ingrese la dirección del paquete: ";
    std::getline(std::cin, direccion);
    std::cout << "Ingrese el peso del paquete (kg): ";
    std::cin >> peso;

    Paquete paquete1(destinatario, direccion, peso);

    std::cin.ignore();  

    std::string placa;
    std::string modelo;

    std::cout << "Ingrese la placa del vehículo: ";
    std::getline(std::cin, placa);
    std::cout << "Ingrese el modelo del vehículo: ";
    std::getline(std::cin, modelo);

    Vehiculo vehiculo1(placa, modelo);

    std::string nombre;
    int id;

    std::cout << "Ingrese el nombre del empleado: ";
    std::getline(std::cin, nombre);
    std::cout << "Ingrese el ID del empleado: ";
    std::cin >> id;

    Empleado empleado1(nombre, id);

    std::cout << "\nInformación del Paquete:\n";
    paquete1.mostrarInfo();
    std::cout << "\nInformación del Vehículo:\n";
    vehiculo1.mostrarInfo();
    std::cout << "\nInformación del Empleado:\n";
    empleado1.mostrarInfo();

    return 0;
}

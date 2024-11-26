# orientado-a-objetos-ad2024

# Servicio de Paquetería ;)

## Descripción del proyecto
Este proyecto tiene como objetivo gestionar un servicio de paquetería, manejando diferentes tipos de paquetes, vehículos de entrega y empleados.

## Funcionalidades
- Registrar paquetes con sus respectivos detalles.
- Asignar paquetes a vehículos para su entrega.
- Mantener un registro de los empleados que manejan las entregas.

## Uso
El usuario podrá registrar nuevos paquetes, asignarlos a vehículos y consultar la información de las entregas.

## Explicación 
Este código es un sistema que modela una "empresa de paquetería", tiene como objetivo mostrar diferentes entidades, como paquetes, empleados (chóferes) y vehículos, se relacionan entre si con herencias, composiciones y agregaciones
  # clases 
  clase Paquete: 
  - Representa el paquete a enviar, con atributos como: destinatario, dirección y peso.
  - El método 'mostrarInfo()' muestra la información del paquete.
  clase Empleado (base):
  - Representa a los empleados de la paquetería, con atributos como: nombre e ID.
  - El método 'mostrarInfo()' muestra la información del paquete.
      Herencia:
      - Subclase: 'Chofer'.
        Atributo adicional: La licencia del chófer.
      - Se sobrescribe el método 'mostrarInfo()' para incluir la licencia.
    clase Vehiculo:
  - Representa el vehículo que transporta los paquetes, con atributos como: placa y vehículo.
  - El método 'mostrarInfo()' muestra la información del paquete.
    clase EmpresaPaqueteria:
  - Es la clase principal que organiza todo el sistema.
      Composición:
      - Incluye un objeto de tipo Paquete, que pertenece exclusivamente a la empresa.
      Agregación:
      - Incluye apuntadores a un Empleado y un Vehiculo, indicando que estos pueden existir             independientemente de la empresa.
      - El método 'mostrarInfo()' muestra la información de los paquetes, empleados y vehículos.
    


## Bibliotecas 
1. #include <iostream>: Se utiliza para la entrada y salida de datos (std::cin y std::cout).
2. #include <string>: Permite trabajar con std::string, esto para manejar cadenas de texto.

## Aputandores
Los utilicé en mi clase 'EmpresaPaqueteria' para implementar una agregación, esto permite que los objetos existan fuera de 'EmpresaPaqueteria'.

## Documentación
Seguí un estilo básico de documentación con comentarios en la línea de código a explicar, demuestro la funcionalidad de cada clase, los métodos, atributos y el como se relacionan las clases.

## UML
Mi diagrama de clases refleja las relaciones entre clases del sistema.
1. Paquete: Está en composición con la clase 'EmpresaPaqueteria'.
2. Empleado: Es la clase base para la subclase 'Chofer' (herencia).
3. Vehiculo: Tiene agregación con 'EmpresaPaqueteria'.
4. EmpresaPaqueteria: Es la clase principal, conecta todos los objetos y gestiona el sistema

   Rombo relleno: Composición
   Rombo vacío: Agregación
   


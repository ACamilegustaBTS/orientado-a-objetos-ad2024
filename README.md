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

## Clases
1. Paquete
2. Vehiculo
3. Empleado

## UML 
+------------------+               +-------------------+              +-------------------+
|     Paquete      |               |     Vehiculo      |              |     Empleado      |
+------------------+               +-------------------+              +-------------------+
| - destinatario   |               | - placa           |              | - nombre          |
| - direccion      |               | - modelo          |              | - id              |
| - peso           |               +-------------------+              +-------------------+
+------------- -------------+      | + getPlaca()      |              | + getNombre()     |
| + getDestinatario() const |      | + getModelo()     |              | + getId()         |
| + getDireccion() const    |      | + setPlaca(pl)    |              | + setNombre(nom)  |
| + getPeso() const         |      | + setModelo(mod)  |              | + setId(i)        |
| + setDestinatario(dest)   |      | + mostrarInfo()   |              | + mostrarInfo()   |
| + setDireccion(dir)       |      +-------------------+              +-------------------+
| + setPeso(p)              |
| + mostrarInfo() const     |
+---------------------------+

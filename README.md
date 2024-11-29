# orientado-a-objetos-ad2024

# Servicio de Paquetería ;)

## Descripción del Proyecto
Este proyecto tiene como objetivo gestionar un sistema de paquetería, modelando diferentes entidades como paquetes, vehículos de entrega y empleados. Se utiliza herencia, composición y agregación para mostrar cómo estas entidades interactúan entre sí.

## Funcionalidades
- Registrar paquetes con sus respectivos detalles.
- Asignar paquetes a vehículos para su entrega.
- Mantener un registro de los empleados responsables de las entregas.
- Mostrar información consolidada del paquete, el vehículo y el empleado asignado.

## Avances y Retroalimentaciones
### Avance 1
Se entregó un código sencillo de un servicio de paquetería.
**Retroalimentación:**
Se modificó e integró el uso de getters y setters para mejorar la encapsulación. Esto permite un acceso más controlado a los atributos de las clases.

### Avance 2
El diagrama UML fue implementado de forma incorrecta.
**Retroalimentación:**
Se modificó el UML a un formato más sencillo y fácil de comprender. Ahora se tiene una representación visual simple del sistema y sus relaciones.

### Avance 3
Se agregó todo lo que hacía falta al código, completando la funcionalidad del sistema de paquetería.
**Retroalimentación:**
Se explicó de mejor forma el README, se documentó y detalló el código para evitar confusiones. Además, se añadieron comentarios que facilitan la comprensión del código y su estructura.

### Entrega final
Con la entrega final, se mejoraron las líneas de código, simplificando y limpiando su estructura para que fuera más fácil de entender.
Se implementó el manejo de errores utilizando excepciones para garantizar que el programa maneje entradas incorrectas de manera adecuada, evitando que el programa termine inesperadamente.

## Clases del Proyecto
### 1. Clase `Paquete`
- **Descripción**: Representa el paquete que será enviado.
- **Atributos**:
  - `destinatario` (string): Nombre del destinatario.
  - `direccion` (string): Dirección de entrega.
  - `peso` (double): Peso del paquete en kilogramos.
- **Método principal**:
  - `mostrarInfo()`: Muestra la información del paquete.

### 2. Clase Base `Empleado`
- **Descripción**: Representa a los empleados de la empresa.
- **Atributos**:
  - `nombre` (string): Nombre del empleado.
  - `id` (int): ID del empleado.
- **Método principal**:
  - `mostrarInfo()`: Muestra la información del empleado.

#### Subclase `Chofer`
- **Atributo adicional**:
  - `licencia` (string): Licencia del chofer.
- **Método principal**:
  - Sobreescribe `mostrarInfo()` para incluir la licencia del chofer.

### 3. Clase `Vehiculo`
- **Descripción**: Representa el vehículo que transporta los paquetes.
- **Atributos**:
  - `placa` (string): Placa del vehículo.
  - `modelo` (string): Modelo del vehículo.
- **Método principal**:
  - `mostrarInfo()`: Muestra la información del vehículo.

### 4. Clase `EmpresaPaqueteria`
- **Descripción**: Clase principal que organiza el sistema.
- **Relaciones**:
  - **Composición**: Incluye un objeto de tipo `Paquete`.
  - **Agregación**: Incluye apuntadores a objetos de tipo `Empleado` y `Vehiculo`.
- **Método principal**:
  - `mostrarInfo()`: Muestra la información del paquete, vehículo y empleado asociados.

## Implementación de Relaciones
- **Herencia**: `Chofer` hereda de `Empleado`, sobrescribiendo el método `mostrarInfo()`.
- **Composición**: `Paquete` es un atributo exclusivo de `EmpresaPaqueteria`.
- **Agregación**: `EmpresaPaqueteria` contiene apuntadores a `Empleado` y `Vehiculo`, permitiendo que existan de manera independiente.

## UML
El diagrama muestra la estructura del sistema y las relaciones entre las clases:
-**Paquete:** Está en composición con la clase `EmpresaPaqueteria`.
-**Empleado:** Es la clase base para la subclase `Chofer` (herencia).
-**Vehiculo:** Tiene agregación con `EmpresaPaqueteria`.
-**EmpresaPaqueteria:** Es la clase principal, conecta todos los objetos y gestiona el sistema
**Rombo relleno: Composición | Rombo vacío: Agregación**

## Bibliotecas Utilizadas
- `<iostream>`: Para entrada y salida de datos.
- `<string>`: Para manejo de cadenas de texto.

## Uso del Programa
1. Ejecutar el programa.
2. Ingresar los datos solicitados en consola:
   - Destinatario, dirección y peso del paquete.
   - Placa y modelo del vehículo.
   - Nombre, ID y licencia del chofer.
3. El sistema imprimirá la información consolidada del paquete, el vehículo y el empleado.

## Referencias
### Herramientas de Inteligencia Artificial:
  - **ChatGPT**: Utilizado para generar ideas, explicar conceptos y optimizar el código.
  - **Copilot**: Ayudó en la sugerencia de fragmentos de código.
### YouTube:
  - **Programación ATS**: Canal de YouTube utilizado para tutoriales y guías sobre C++ y UML.
   [Programación ATS en YouTube](https://www.youtube.com/c/Programaci%C3%B3nATS).
### Ayuda Personal:
  - Un familiar con experiencia en programación fue consultado para solucionar dudas y mejorar la estructura del código.

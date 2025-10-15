# Examen Segundo Corte: Resolución de Problemas de Negocios Locales en C/C++

Este repositorio contiene el examen del segundo corte para la asignatura de Desarrollo de Software en C/C++. El objetivo es que los estudiantes resuelvan problemas reales de negocios locales utilizando únicamente variables primitivas y control de flujo en C o C++.

## Instrucciones Generales

- Cada ejercicio representa un caso de la vida real basado en necesidades de negocios locales.
- Debes resolver cada ejercicio únicamente usando variables primitivas (int, float, char, etc.), condicionales y ciclos (`while`, `for`, `do-while`).
- No se permite el uso de arreglos, listas, pilas, colas, árboles, structs, ni ningún tipo de estructura de datos compuesta.
- No se permite el uso de bases de datos, frameworks externos ni librerías avanzadas.
- Cada carpeta contiene un `README.md` con la descripción del caso y los requerimientos específicos.
- El código debe ser claro, modular y bien comentado.
- Se evaluará la correcta aplicación de lógica, control de flujo y documentación.

## Ejercicios
1. [Gestión de Inventario para una Tienda de Abarrotes](./Ejercicio1)
2. [Sistema de Reservas para un Restaurante Local](./Ejercicio2)
3. [Control de Turnos en una Barbería](./Ejercicio3)
4. [Registro de Clientes y Ventas en una Panadería](./Ejercicio4)
5. [Gestión de Citas para un Consultorio Médico](./Ejercicio5)
6. [Administración de Pedidos para una Papelería](./Ejercicio6)

Lee cuidadosamente cada caso y resuelve los requerimientos propuestos en el lenguaje C o C++ usando solo variables primitivas y control de flujo.

# Barbería "El Corte Fino" - Control de Turnos

Este proyecto es una pequeña aplicación en C++ para ayudar a una barbería a organizar el orden de atención de sus clientes. El sistema permite agregar clientes a la fila, atenderlos en orden, consultar la lista de espera y ver el historial de clientes atendidos durante el día.

## ¿Cómo funciona?

- Puedes agregar hasta 3 clientes a la fila de espera, indicando su nombre y el servicio que solicitan.
- El barbero atiende a los clientes en el orden en que llegaron.
- Se puede consultar en cualquier momento la lista de espera actual.
- El sistema guarda un historial de los clientes atendidos durante el día.
- El menú es interactivo y fácil de usar desde la consola.

## Requerimientos técnicos

- El código está hecho en C++ puro, usando solo variables primitivas (sin arreglos ni listas).
- No se necesita instalar nada especial, solo un compilador de C++.
- El programa se ejecuta en la terminal.

## ¿Cómo usarlo?

1. Compila el archivo `Barberia.cpp` con tu compilador favorito.
2. Ejecuta el programa desde la terminal.
3. Sigue las instrucciones del menú para agregar clientes, atenderlos y consultar la información.

## Ejemplo de uso

```
=== Barberia 'El Corte Fino' ===
1. Agregar cliente a la fila
2. Atender siguiente cliente
3. Ver lista de espera
4. Ver historial del dia
5. Salir
Seleccione una opcion:
```
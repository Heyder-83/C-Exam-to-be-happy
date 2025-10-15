#include <iostream>
using namespace std;

void mostrarCliente(string nombre, string servicio) {
    if (nombre != "") {
        cout << " - " << nombre << " (" << servicio << ")" << endl;
    }
}

int main() {
    // Variables para los 3 turnos disponibles
    string c1_nombre = "", c1_servicio = "";
    string c2_nombre = "", c2_servicio = "";
    string c3_nombre = "", c3_servicio = "";

    // Variables para historial
    string h1 = "", h1_servicio = "";
    string h2 = "", h2_servicio = "";
    string h3 = "", h3_servicio = "";

    bool activo = true;
    int opcion = 0;

    while (activo) {
        cout << "\n=== Barberia 'El Corte Fino' ===" << endl;
        cout << "1. Agregar cliente a la fila" << endl;
        cout << "2. Atender siguiente cliente" << endl;
        cout << "3. Ver lista de espera" << endl;
        cout << "4. Ver historial del dia" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el buffer de entrada

        if (opcion == 1) {
            string nombre, servicio;
            cout << "Ingrese nombre del cliente: ";
            getline(cin, nombre);
            cout << "Ingrese servicio solicitado: ";
            getline(cin, servicio);

            // Simulación de cola
            if (c1_nombre == "") {
                c1_nombre = nombre;
                c1_servicio = servicio;
            } else if (c2_nombre == "") {
                c2_nombre = nombre;
                c2_servicio = servicio;
            } else if (c3_nombre == "") {
                c3_nombre = nombre;
                c3_servicio = servicio;
            } else {
                cout << "La fila está llena (maximo 3 clientes)." << endl;
            }

        } else if (opcion == 2) {
            if (c1_nombre != "") {
                cout << "\nAtendiendo a: " << c1_nombre << " (" << c1_servicio << ")" << endl;

                // Guardar en historial (la primera vacía)
                if (h1 == "") {
                    h1 = c1_nombre;
                    h1_servicio = c1_servicio;
                } else if (h2 == "") {
                    h2 = c1_nombre;
                    h2_servicio = c1_servicio;
                } else if (h3 == "") {
                    h3 = c1_nombre;
                    h3_servicio = c1_servicio;
                }

                // Mover la fila
                c1_nombre = c2_nombre; c1_servicio = c2_servicio;
                c2_nombre = c3_nombre; c2_servicio = c3_servicio;
                c3_nombre = ""; c3_servicio = "";

            } else {
                cout << "No hay clientes en espera." << endl;
            }

        } else if (opcion == 3) {
            cout << "\nClientes en espera:" << endl;
            if (c1_nombre == "" && c2_nombre == "" && c3_nombre == "") {
                cout << " - (ninguno)" << endl;
            } else {
                mostrarCliente(c1_nombre, c1_servicio);
                mostrarCliente(c2_nombre, c2_servicio);
                mostrarCliente(c3_nombre, c3_servicio);
            }

        } else if (opcion == 4) {
            cout << "\nHistorial de clientes atendidos:" << endl;
            if (h1 == "" && h2 == "" && h3 == "") {
                cout << " - (vacío)" << endl;
            } else {
                if (h1 != "") cout << " * " << h1 << " (" << h1_servicio << ")" << endl;
                if (h2 != "") cout << " * " << h2 << " (" << h2_servicio << ")" << endl;
                if (h3 != "") cout << " * " << h3 << " (" << h3_servicio << ")" << endl;
            }

        } else if (opcion == 5) {
            activo = false;
            cout << "Saliendo del sistema..." << endl;
        } else {
            cout << "Opción invalida, intente de nuevo." << endl;
        }
    }

    return 0;
}

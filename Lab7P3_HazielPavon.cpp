#include <iostream>
using namespace std;

void ejercicio1() {
	bool seguir = true;

	while (seguir) {
		cout << "--- Banco LCF ---" << endl;
		cout << "1. Crear Cuenta" << endl;
		cout << "2. Realizar Deposito" << endl;
		cout << "3. Realizar Retiro" << endl;
		cout << "4. Mostrar Informacion de Cuenta" << endl;
		cout << "5. Eliminar Cuenta" << endl;
		cout << "6. Salir" << endl;
		cout << "Ingrese una opcion: ";
		int opcion;
		cin >> opcion;

		switch (opcion) {
		case 1:




			break;

		case 2:

			break;

		case 3:

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:
			cout << "Saliendo..." << endl;
			seguir = false;
			break;
		default:
			cout << "Ingrese una opcion valida" << endl;
			break;
		}

	}
}
int main()
{
	ejercicio1(); 

}


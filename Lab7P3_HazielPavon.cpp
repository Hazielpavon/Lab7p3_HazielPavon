#include <iostream>
using namespace std;

#include "CuentaBancaria.h"
#include "BancoLcf.h"
#include "Transaccion.h"
#include "CuentadeCheque.h"
#include "CuentadeAhorro.h"


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
		case 1: {
			bool vali1 = false;
			bool vali2 = false;
			bool vali3 = false;
			bool vali4 = false;
			int tipo;
			string nombre = " ";
			int numerodecuenta = 0;
			double balance = 0.0;
			double tasa = 0.0;
			double sobregiro = 0.0;
			BancoLcf* banco;
			// validando la opcion correcta 
			while (!vali1) {
				cout << "Ingrese que tipo de cuenta desea 1) Ahorro, 2)Cheque" << endl;
				tipo = 0;
				cin >> tipo;
				if (tipo == 1 || tipo == 2) {
					vali1 = true;
				}
				else {
					cout << "Ingrese correctamente el dato" << endl;
				}
			}
			// cuenta de ahorros 
			if (tipo == 1) {
				cout << "Ingrese su nombre: " << endl;
				nombre = " ";
				cin >> nombre;
				while (!vali2) {
					cout << "Ingrese su numero de cuenta: " << endl;
					numerodecuenta = 0;
					cin >> numerodecuenta;
					if (numerodecuenta < 999 || numerodecuenta >10000) {
						cout << "El numero de cuente debe ser mayor a 1000 y menor que 9999" << endl;
					}
					else {
						vali2 = true;
					}
				}
				// validando el balance 
				while (!vali3) {
					cout << "Ingrese su balance: " << endl;
					balance = 0.0;
					cin >> balance;
					if (balance == 0 || balance > 100001) {
						cout << "El balance debe ser mayor a 0 y menor a 100,000 L." << endl;
					}
					else {
						vali3 = true;
					}
				}
				// validando la tasa 
				while (!vali4) {
					cout << "Ingrese la tasa de de interes: " << endl;
					tasa = 0.0;
					cin >> tasa;
					if (tasa < 9 || tasa >21) {
						cout << "la tasa debe estar entre 10 y 20" << endl;
					}
				}
				CuentaBancaria* cuentaahorro = new CuentadeAhorro(balance, numerodecuenta, nombre, tasa);
				banco->agregarcuenta(cuentaahorro);
			}
			//cheque 
			else {
				vali1 = false;
				vali2 = false;
				vali3 = false;
				vali4 = false;
				string nombre = " ";
				int numerodecuenta = 0;
				double balance = 0.0;

				cout << "Ingrese su nombre: " << endl;
				nombre = " ";
				cin >> nombre;
				while (!vali2) {
					cout << "Ingrese su numero de cuenta: " << endl;
					numerodecuenta = 0;
					cin >> numerodecuenta;
					if (numerodecuenta < 999 || numerodecuenta >10000) {
						cout << "El numero de cuente debe ser mayor a 1000 y menor que 9999" << endl;
					}
					else {
						vali2 = true;
					}
				}
				// validando el balance 
				while (!vali3) {
					cout << "Ingrese su balance: " << endl;
					balance = 0.0;
					cin >> balance;
					if (balance == 0 || balance > 100001) {
						cout << "El balance debe ser mayor a 0 y menor a 100,000 L." << endl;
					}
					else {
						vali3 = true;
					}
				}
				// validando el sobregiro 
				while (!vali4) {
					cout << "Ingrese el sobregiro: " << endl;
					tasa = 0.0;
					cin >> tasa;
					if (tasa < 99 || tasa >351) {
						cout << "El sobregiro debe estar entre 100 y 350" << endl;
					}
				}
				CuentaBancaria* cuentaCheque = new CuentadeCheque(balance, numerodecuenta, nombre, sobregiro);
				banco->agregarcuenta(cuentaCheque);
			}
		}
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


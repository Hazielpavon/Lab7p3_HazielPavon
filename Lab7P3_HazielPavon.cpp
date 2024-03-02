#include <iostream>
using namespace std;

#include "CuentaBancaria.h"
#include "BancoLcf.h"
#include "Transaccion.h"
#include "CuentadeCheque.h"
#include "CuentadeAhorro.h"

BancoLcf* banco = new BancoLcf();

void ejercicio1() {
	bool seguir = true;
	int contador = 0;
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
				contador++;
				cout << "Ingrese su nombre: " << endl;
				nombre = " ";
				cin.ignore();  
				getline(cin, nombre);
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
					else {
						vali4 = true; 
					}
				}
				CuentaBancaria* cuentaahorro = new CuentadeAhorro(balance, numerodecuenta, nombre, tasa);
				banco->agregarcuenta(cuentaahorro);

			}
			//cheque 
			else {
				contador++;
				bool vali11 = false;
				bool vali22 = false;
				bool vali33 = false;
				bool vali44 = false;
				string nombre = " ";
				int numerodecuenta = 0;
				double balance = 0.0;

				cout << "Ingrese su nombre: " << endl;
				nombre = " ";
				cin >> nombre;
				while (!vali22) {
					cout << "Ingrese su numero de cuenta: " << endl;
					numerodecuenta = 0;
					cin >> numerodecuenta;
					if (numerodecuenta < 999 || numerodecuenta >10000) {
						cout << "El numero de cuente debe ser mayor a 1000 y menor que 9999" << endl;
					}
					else {
						vali22 = true;
					}
				}
				// validando el balance // llegue dku 
				while (!vali33) {
					cout << "Ingrese su balance: " << endl;
					balance = 0.0;
					cin >> balance;
					if (balance == 0 || balance > 100001) {
						cout << "El balance debe ser mayor a 0 y menor a 100,000 L." << endl;
					}
					else {
						vali33 = true;
					}
				}

				// llegue a las 18:20 no me dejo hacer el commit justo a esa hora 

				   // validando el sobregiro 
				while (!vali44) {
					cout << "Ingrese el sobregiro: " << endl;
					tasa = 0.0;
					cin >> tasa;
					if (tasa < 99 || tasa >351) {
						cout << "El sobregiro debe estar entre 100 y 350" << endl;
					}
					else {
						vali44 = true; 
					}
				}
				CuentaBancaria* cuentaCheque = new CuentadeCheque(balance, numerodecuenta, nombre, sobregiro);
				banco->agregarcuenta(cuentaCheque);
			}
			break;
		}
		case 2: {
			if (contador != 0) {
				banco->mostrarcuentas();

				cout << "Seleccione el numero de la cuenta en la que desea realizar el deposito: ";
				int opcionCuenta;
				cin >> opcionCuenta;
				opcionCuenta--;

				if (opcionCuenta >= 0 && opcionCuenta < banco->getcuentasbancarias().size()) {
					double monto;
					cout << "Ingrese el monto que desea depositar: ";
					cin >> monto;
					CuentaBancaria* cuentaSeleccionada = banco->getcuentasbancarias()[opcionCuenta];
					Transaccion<CuentaBancaria>* Tran = new Transaccion<CuentaBancaria>(monto, "Deposito", cuentaSeleccionada);
					Tran->ejecutarTransaccion();
				}
				else {
					cout << "Opcion de cuenta invalida." << endl;
				}
				break;
			}
			else {
				cout << "Debe crear un usuario primero" << endl;
			}
		}

		case 3:
		{
			if (contador != 0) {
				banco->mostrarcuentas();

				cout << "Seleccione el numero de la cuenta en la que desea realizar el retiro: ";
				int opcionCuenta;
				cin >> opcionCuenta;
				opcionCuenta--;

				if (opcionCuenta >= 0 && opcionCuenta < banco->getcuentasbancarias().size()) {
					double monto;
					cout << "Ingrese el monto que desea retirar: ";
					cin >> monto;
					CuentaBancaria* cuentaSeleccionada = banco->getcuentasbancarias()[opcionCuenta];
					Transaccion<CuentaBancaria>* Tran = new Transaccion<CuentaBancaria>(monto, "Retiro", cuentaSeleccionada);
					Tran->ejecutarTransaccion();
				}
				else {
					cout << "Opción de cuenta inválida." << endl;
				}
				break;
			}
			else {
				cout << "Debe ingresar un usuario primero" << endl;
			}
		}
		case 4: {
			if (contador != 0) {
				banco->mostrarcuentas();
			}
			else {
				cout << "Debe ingresar un usuario primero" << endl;
			}
		}
			  break;

		case 5: {
			if (contador != 0) {
				banco->eliminarcuenta();
			}
			else {
				cout << "Debe ingresar un usuario primero" << endl;
			}
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
}
int main()
{
	ejercicio1();

}


#include "BancoLcf.h"
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>  
#include <memory.h>

BancoLcf::BancoLcf()
{
}

BancoLcf::BancoLcf(double balance = 0.0, int Numerodecuenta=0, string nombre= " ") :

	CuentaBancaria(balance, Numerodecuenta, nombre)
{}
vector<CuentaBancaria*> BancoLcf::getcuentasbancarias()
{
	return cuentasbancarias;
}

void BancoLcf::setcuentasbancarias(vector<CuentaBancaria*> cuentasbancarias)
{
	this->cuentasbancarias = cuentasbancarias; 
}

void BancoLcf::agregarcuenta(CuentaBancaria* cuenta)
{
	cuentasbancarias.push_back(cuenta); 
}

void BancoLcf::eliminarcuenta()
{
    cout << "Ingrese el indice de la cuenta que desea eliminar: ";
    int indice;
    cin >> indice;
    if (indice >= 0 && indice < cuentasbancarias.size()) {
        cuentasbancarias.erase(cuentasbancarias.begin() + indice+1);
        cout << "Cuenta eliminada correctamente." << endl;
    }
    else {
        cout << "Indice fuera de rango." << endl;
    }

}
void BancoLcf::mostrarcuentas()
{
	for (int i = 0; i < cuentasbancarias.size(); i++)
	{
		cout << "Usuario: " << i << endl; 
		cout << "Nombre: " << cuentasbancarias[i]->getNombre() << endl;
		cout << "Numero De cuenta: " << cuentasbancarias[i]->getNumerodecuenta() << endl;
		cout << "Balance: " << cuentasbancarias[i]->getNumerodecuenta() << endl;
	}
}

BancoLcf::~BancoLcf()
{
	for (auto CuentaBancaria : cuentasbancarias) {
		delete CuentaBancaria;
	}
	tipodecuenta = 0; 
}

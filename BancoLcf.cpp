#include "BancoLcf.h"
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>  
#include <memory.h>

BancoLcf::BancoLcf(double balance, int Numerodecuenta, string nombre, int tipodecuenta) :

	CuentaBancaria(balance, Numerodecuenta, nombre), tipodecuenta(tipodecuenta)
{}

int BancoLcf::gettipodecuenta() const 
{
	return tipodecuenta;
}

void BancoLcf::setipodecuenta(int tipodecuenta)
{
	this->tipodecuenta = tipodecuenta; 
}

vector<CuentaBancaria*> BancoLcf::getcuentasbancarias()
{
	return vector<CuentaBancaria*>();
}

void BancoLcf::setcuentasbancarias(vector<CuentaBancaria*> cuentasbancarias)
{
	this->cuentasbancarias = cuentasbancarias; 
}

void BancoLcf::agregarcuenta(CuentaBancaria* cuenta)
{
}

void BancoLcf::eliminarcuenta(int numcuenta)
{
}

void BancoLcf::mostrarcuentas()
{
}

BancoLcf::~BancoLcf()
{
	for (auto CuentaBancaria : cuentasbancarias) {
		delete CuentaBancaria;
	}
	tipodecuenta = 0; 
}

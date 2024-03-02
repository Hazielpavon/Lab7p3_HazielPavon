#include "CuentaBancaria.h"
using namespace std; 
#include <iostream>
#include <string>
CuentaBancaria::CuentaBancaria()
{
}
CuentaBancaria::CuentaBancaria(double balance = 0.0, int Numerodecuenta = 0, string nombre= " ") :

	balance(balance), Numerodecuenta(Numerodecuenta), Nombre(nombre)

{}

CuentaBancaria::~CuentaBancaria()
{
	balance = 0.0; 
	Numerodecuenta = 0; 
	Nombre = " "; 
}

double CuentaBancaria::getbalance() const
{
	return balance;
}

void CuentaBancaria::setbalance(double balance)
{
	this->balance = balance; 
}

int CuentaBancaria::getNumerodecuenta() const
{
	return Numerodecuenta;
}

void CuentaBancaria::setNumerodecuenta(int Numerodecuenta)
{
	this->Numerodecuenta = Numerodecuenta; 
}

string CuentaBancaria::getNombre() const
{
	return Nombre;
}

void CuentaBancaria::setNombre(string Nombre) 
{
	this->Nombre = Nombre; 
}



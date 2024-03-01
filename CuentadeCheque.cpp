#include "CuentadeCheque.h"
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>

CuentadeCheque::CuentadeCheque(double balance, int Numerodecuenta, string nombre, double sobregiro) :

	CuentaBancaria(balance, Numerodecuenta, nombre), sobregiro(sobregiro)

{}

double CuentadeCheque::getsobregiro() const
{
	return sobregiro;
}

void CuentadeCheque::setsobregiro(int Numerodecuenta)
{
	this->sobregiro = sobregiro; 
}

void CuentadeCheque::depositar(double monto)
{
	setbalance(getbalance()+monto);
}

void CuentadeCheque::retirar(double monto)
{
	if (getbalance() < monto) {
		setbalance((getbalance() - monto)-sobregiro);
	}
	else {
		setbalance((getbalance() - monto));
	}
}

CuentadeCheque::~CuentadeCheque()
{
	sobregiro = 0.0; 
}

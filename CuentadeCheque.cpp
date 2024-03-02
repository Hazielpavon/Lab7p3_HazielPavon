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
	if (monto > 100000) {
		setbalance(getbalance() + monto);
		cout << "Se le sumron: " << (getbalance() + monto)  << ", a su cuenta" << endl;
	}
	else {
		cout << "El deposito no puede ser tan grande" << endl;
	}
}

void CuentadeCheque::retirar(double monto)
{
	if (getbalance() < monto) {
		setbalance((getbalance() - monto)-sobregiro);
		cout << "Se le retiraron: " << ((getbalance() - monto) - sobregiro) << ", a su cuenta con el sobregiro" << endl;
	}
	else {
		setbalance((getbalance() - monto));
		cout << "Se le retiraron: " << (getbalance() - monto) << ", a su cuenta" << endl;
	}
}

CuentadeCheque::~CuentadeCheque()
{
	sobregiro = 0.0; 
}

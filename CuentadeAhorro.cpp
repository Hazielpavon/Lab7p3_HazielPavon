#include "CuentadeAhorro.h"

CuentadeAhorro::CuentadeAhorro(double balance, int Numerodecuenta, string nombre, double tasa) :
	CuentaBancaria(balance, Numerodecuenta, nombre), tasa(tasa)
{}

double CuentadeAhorro::gettasa() const
{
	return tasa;
}

void CuentadeAhorro::settasa(int Numerodecuenta)
{
	this->tasa = tasa;
}

void CuentadeAhorro::depositar(double monto)
{

	double bono = monto * (tasa / 100.0);

	setbalance((getbalance() + monto) + bono);

}

void CuentadeAhorro::retirar(double monto)
{
	if (getbalance() < monto) {
		cout << "No tiene el balance suficiente" << endl; 
	}
	else {
		setbalance(getbalance() + monto); 
	}


}

CuentadeAhorro::~CuentadeAhorro()
{
	tasa = 0.0;
}

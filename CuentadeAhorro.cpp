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
	if (monto > 100000) {
		double bono = monto * (tasa / 100.0);
		setbalance((getbalance() + monto) + bono);
		cout << "Se le sumron: " << (getbalance() + monto) + bono << ", a su cuenta" << endl; 
	}
	else {
		cout << "El deposito no puede ser tan grande" << endl; 
	}

}

void CuentadeAhorro::retirar(double monto)
{
	if (getbalance() < monto) {
		cout << "No tiene el balance suficiente" << endl; 
	}
	else {
		setbalance(getbalance() - monto); 
		cout << "Se le retiraron: " << (getbalance() - monto) << ", a su cuenta" << endl;
	}


}

CuentadeAhorro::~CuentadeAhorro()
{
	tasa = 0.0;
}

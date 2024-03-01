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
}

void CuentadeAhorro::retirar(double monto)
{
}

CuentadeAhorro::~CuentadeAhorro()
{
	tasa = 0.0;
}

#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
class CuentadeAhorro : public CuentaBancaria 
{
private : 
	double tasa; 
public : 
	CuentadeAhorro(double balance, int Numerodecuenta, string nombre, double tasa);
	double gettasa() const;
	void settasa(int Numerodecuenta);
	void depositar(double monto) override; 
	void retirar(double monto)override ;
	~CuentadeAhorro(); 
};


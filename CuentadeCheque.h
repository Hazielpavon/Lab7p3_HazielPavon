#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
class CuentadeCheque : public CuentaBancaria 
{
private:
	double sobregiro = 0.0; 
public: 
	CuentadeCheque(double balance, int Numerodecuenta, string nombre, double sobregiro);
	double getsobregiro() const;
	void setsobregiro(int Numerodecuenta);
	void depositar(double monto) override;
	void retirar(double monto)override;
	~CuentadeCheque(); 
};


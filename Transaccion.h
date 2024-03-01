#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
template <class T>
class Transaccion : public CuentaBancaria
{
private:
	double monto;
	string tipo;
	T* cuenta = CuentaBancaria;


public:
	Transaccion(double balance, int Numerodecuenta, string nombre, double monto, string tipo, T* cuenta = CuentaBancaria) :
		CuentaBancaria(balance, Numerodecuenta, nombre), monto(monto), tipo(tipo), cuenta(cuenta)
	{}
	double getmonto() {
		return monto;
	}
	void setmonto() {
		this->monto = monto;
	}

	string gettipo() {
		return tipo;
	}

	void settipo() {
		this->tipo = tipo;
	}

	T* getcuenta() {
		return cuenta;
	}
	void setT(T* cuenta) {
		this->cuenta = cuenta;
	}
	void ejecutarTransaccion() {
		if (tipo == "Deposito") {
			T* cuenta = nullptr->depositar();
		}
		else {
			T* cuenta = nullptr->retirar();
		}
	}
	~Transaccion() {
		delete[] cuenta; 
	}
};


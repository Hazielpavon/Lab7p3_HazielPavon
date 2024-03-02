#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
template <class T>
class Transaccion {
private:
	double monto;
	string tipo;
	T* cuenta;

public:
	Transaccion(double monto, string tipo, T* cuenta) : monto(monto), tipo(tipo), cuenta(cuenta) {}

	void ejecutarTransaccion() {
		if (tipo == "Deposito") {
			cuenta->depositar(monto);
		}
		else if (tipo == "Retiro") {
			cuenta->retirar(monto);
		}
		else {
			cout << "Tipo de transacción inválido." << endl;
		}
	}

	double getMonto() const {
		return monto;
	}
	void setMonto(double monto) {
		this->monto = monto;
	}

	string getTipo() const {
		return tipo;
	}
	void setTipo(string tipo) {
		this->tipo = tipo;
	}

	T* getCuenta() const {
		return cuenta;
	}
	void setCuenta(T* cuenta) {
		this->cuenta = cuenta;
	}

	virtual ~Transaccion() {
		delete cuenta;
	}
};



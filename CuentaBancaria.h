#pragma once
using namespace std; 
#include<iostream>

class CuentaBancaria
{
private:
	double balance = 0.0;
	int Numerodecuenta = 0; 
	string Nombre = " ";
public:
	CuentaBancaria();
	CuentaBancaria(double balance, int Numerodecuenta, string nombre); 
	~CuentaBancaria(); 
	double getbalance() const; 
	void setbalance(double balance); 
	int getNumerodecuenta() const;
	void setNumerodecuenta(int Numerodecuenta);
	string getNombre() const;
	void setNombre(string Nombre) ;
	virtual void depositar(double monto) = 0;
	virtual void retirar(double monto) = 0;

};

//ejemplo 
//int getFecha()const;
//void setFecha(int fecha);
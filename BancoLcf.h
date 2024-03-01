#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>  
#include <memory.h>
class BancoLcf : public CuentaBancaria
{
private : 
	vector <CuentaBancaria*> cuentasbancarias; 
	int tipodecuenta; 
public : 
	BancoLcf(double balance, int Numerodecuenta, string nombre, int tipodecuenta); 
	int gettipodecuenta()const; 
	void setipodecuenta(int tipodecuenta); 
	vector<CuentaBancaria*> getcuentasbancarias();
	void setcuentasbancarias(vector<CuentaBancaria*> cuentasbancarias);
	void agregarcuenta(CuentaBancaria* cuenta); 
	void eliminarcuenta(int numcuenta); 
	void mostrarcuentas(); 
	~BancoLcf(); 
};


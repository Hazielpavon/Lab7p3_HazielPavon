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
	int tipodecuenta = 0; 
public : 
	BancoLcf();
	BancoLcf(double balance, int Numerodecuenta, string nombre); 
	vector<CuentaBancaria*> getcuentasbancarias();
	void setcuentasbancarias(vector<CuentaBancaria*> cuentasbancarias);
	void agregarcuenta(CuentaBancaria* cuenta); 
	void eliminarcuenta(); 
	void mostrarcuentas(); 
	~BancoLcf(); 
};


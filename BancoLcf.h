#pragma once
#include "CuentaBancaria.h"
using namespace std;
#include <iostream>
#include <string>
#include <vector>  
#include <memory.h>
class BancoLcf 
{
public : 
	vector <CuentaBancaria*> cuentasbancarias; 
	BancoLcf();
	vector<CuentaBancaria*> getcuentasbancarias();
	void setcuentasbancarias(vector<CuentaBancaria*> cuentasbancarias);
	void agregarcuenta(CuentaBancaria* cuenta); 
	void eliminarcuenta(); 
	void mostrarcuentas(); 
	~BancoLcf(); 
};


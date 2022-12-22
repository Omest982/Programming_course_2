﻿#pragma once
#include <string>
#include "Account.h"

using namespace std;

class Wallet: public Account {
private:
	
public:
	Wallet();				//Конструкторы
	Wallet(string _name, int _money);
	~Wallet();				//Деструктор
	void print();
};
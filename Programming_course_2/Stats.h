﻿#pragma once
#include <iostream>

using namespace std;

class Stats {
private:
	int profit;			//Денег заработано
	int expenses;		//Денег потрачено
public:
	Stats();
	Stats(int _profit, int _expenses);			//Конструкторы
	Stats(const Stats& _stat);
	~Stats();
	void setProfit(int newProfit);
	void setExpenses(int newExpenses);
	int getProfit() const;
	int getExpenses() const;
	void addProfit(int amount);
	void addExpenses(int amount);
	void print();
};
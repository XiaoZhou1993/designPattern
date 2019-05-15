#ifndef _STRATEGY_FACTORY_H
#define _STRATEGY_FACTORY_H

#include <iostream>

class cashMethod
{
public:
	cashMethod();
	~cashMethod();

	virtual double calCash() = 0;
};

class cashNormal : public cashMethod
{
private:
	double moneyAmount;

public:
	double calCash(double tempMoney);
};

class cashDiscount : public cashMethod
{
private:
	double moneyAmount;

public:
	double calCash(double tempMoney, double tempDiscount);
};

class cashReturn : public cashMethod
{
private:
	double cashReturnCondition;
	double cashReturnNum;
	double moneyAmount;

public:
	void getCashReturn(double tempReturnCondition, double tempReturnNum);
	double calCash(double tempMoney);
};

class strategyFactory
{
	
};

#endif
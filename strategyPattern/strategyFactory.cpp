#include "strategyFactory.h"

cashMethod::cashMethod()
{
	std::cout << "Enter the constructor of the cashMethod!" << std::endl;
}

cashMethod::~cashMethod()
{
	std::cout << "Enter the destructor of the cashMethod!" << std::endl;
}

double cashNormal::calCash(double tempMoney)
{
	moneyAmount = tempMoney;

	return moneyAmount;
}

double cashDiscount::calCash(double tempMoney, double tempDiscount)
{
	moneyAmount = tempMoney * tempDiscount;

	return moneyAmount;
}

void cashReturn::getCashReturn(double tempReturnCondition, double tempReturnNum)
{
	cashReturnCondition = tempReturnCondition;
	cashReturnNum = tempReturnNum;
}

double cashReturn::calCash(double tempMoney)
{
	moneyAmount = tempMoney - (tempMoney / cashReturnCondition) * cashReturnNum;

	return moneyAmount;
}
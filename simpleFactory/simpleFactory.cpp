#include "simpleFactory.h"

calculateOperation::calculateOperation()
{
	operNumberA = 0.0;
	operNumberB = 0.0;
}

calculateOperation::calculateOperation(double tempNumA, double tempNumB)
{
	operNumberA = tempNumA;
	operNumberB = tempNumB;
}

calculateOperation::~calculateOperation()
{
	std::cout << "Enter the destructor of calculateOperation!" << std::endl;
}

void calculateOperation::aSetNumA(double tempNumA)
{
	operNumberA = tempNumA;
}

void calculateOperation::aSetNumB(double tempNumB)
{
	operNumberB = tempNumB;
}

double calculateOperation::aGetNumA()
{
	return operNumberA;
}

double calculateOperation::aGetNumB()
{
	return operNumberB;
}

double operationAdd::aGetCalResult()
{
	double tempNumA = calculateOperation::aGetNumA();
	double tempNumB = calculateOperation::aGetNumB();

	return tempNumA + tempNumB;
}

double operationSub::aGetCalResult()
{
	double tempNumA = calculateOperation::aGetNumA();
	double tempNumB = calculateOperation::aGetNumB();

	return tempNumA - tempNumB;
}

double operationMul::aGetCalResult()
{
	double tempNumA = calculateOperation::aGetNumA();
	double tempNumB = calculateOperation::aGetNumB();

	return tempNumA * tempNumB;
}

double operationDiv::aGetCalResult()
{
	double tempNumA = calculateOperation::aGetNumA();
	double tempNumB = calculateOperation::aGetNumB();

	std::string exceptionStr("The operNumberB is zero!");

	if(0 == tempNumB)
		throw exceptionStr;

	return tempNumA / tempNumB;
}
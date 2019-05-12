#ifndef _SIMPLE_FACTORY_H
#define _SIMPLE_FACTORY_H

#include <iostream>
#include <map>

class calculateOperation
{
private:
	double operNumberA;
	double operNumberB;

public:
	calculateOperation();
	calculateOperation(double tempNumA, double tempNumB);

	~calculateOperation();

	void aSetNumA(double tempNumA);
	void aSetNumB(double tempNumB);

	double aGetNumA();
	double aGetNumB();

	virtual double aGetCalResult()=0;
};

class operationAdd : public calculateOperation
{
public:
	double aGetCalResult();
};

class operationSub : public calculateOperation
{
public:
	double aGetCalResult();
};

class operationMul : public calculateOperation
{
public:
	double aGetCalResult();
};

class operationDiv : public calculateOperation
{
public:
	double aGetCalResult();
};

class operationFactory
{
public:
	calculateOperation* createOperation(std::string operate)
	{
		std::map<std::string,int> operToIndex = 
		{
			{"+", 0},
			{"-", 1},
			{"*", 2},
			{"/", 3}
		};
		switch(operToIndex.at(operate))
		{
			case 0:
				return new operationAdd();
			case 1:
				return new operationSub();
			case 2:
				return new operationMul();
			case 3:
				return new operationDiv();
			default:
				throw "The operation is not exist!";
				break;
		}
	}
};

#endif
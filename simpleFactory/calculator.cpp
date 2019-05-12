#include "./simpleFactory.h"

int main()
{
	try
	{
		operationFactory myOperFactory;
		calculateOperation* oper = myOperFactory.createOperation("-");
		oper->aSetNumA(1);
		oper->aSetNumB(2);
		double calResult = oper->aGetCalResult();
		std::cout << "calResult = "<< calResult << std::endl;
		delete oper;
	}
	catch(std::string exceptionStr)
	{
		std::cout << "The code throw a exception :"<< exceptionStr << std::endl;
	}
}
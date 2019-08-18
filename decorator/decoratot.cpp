#include <iostream>

//abstract component
class Person
{
public:
	virtual std::string dressShow() = 0;
	virtual double cost() = 0;
};

//concrete component
class Female : public Person
{
public:
	std::string dressShow()
	{
		return "female :";
	}

	double cost()
	{
		return 0;
	}
}

class Male : public Person
{
public:
	std::string dressShow()
	{
		return "male :";
	}

	double cost()
	{
		return 0;
	}
}

//decorator
class Finery : public Person
{
public:
	Finery(Person *pPesron)
	{
		mpPesron = pPesron;
	}

	std::string dressShow()
	{
		mpPesron->dressShow();
	}

	double cost()
	{
		mpPesron->cost();
	}

protected:
	Person *mpPesron;
}

//concrete decorator
class TShirts : public Finery
{
public:
	TShirts(Person *pPesron) : Finery(pPesron)
	{

	}

	std::string dressShow()
	{
		return mpPesron->dressShow() + "TShirts";
	}

	double cost()
	{
		return mpPesron->cost() + 27;
	}
}

class BigTrouser : public Finery
{
public:
	TShirts(Person *pPesron) : Finery(pPesron)
	{

	}

	std::string dressShow()
	{
		return mpPesron->dressShow() + "BigTrouser";
	}

	double cost()
	{
		return mpPesron->cost() + 14;
	}
}

class GymShoes : public Finery
{
public:
	TShirts(Person *pPesron) : Finery(pPesron)
	{

	}

	std::string dressShow()
	{
		return mpPesron->dressShow() + "GymShoes";
	}

	double cost()
	{
		return mpPesron->cost() + 43;
	}
}

int main()
{
    
}

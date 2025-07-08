#pragma once
#include <string>
using namespace std;
class clsCustomer
{
public:
	string name;
	int age;
	float Balance;
	clsCustomer(string name, int age, float Balance)
	{
		this->name = name;
		this->age = age;
		this->Balance = Balance;
	}
};


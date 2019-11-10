#include "Cat.h"
#include <iostream>

using namespace std;

CCat::CCat(const string& name)
{
	
}


CCat::~CCat()
{

}

void CCat::talk()
{
	cout << "Miao~Wu, I am " << name << "." << endl;
	cout << name << " age is " << age << endl;
	cout << name << " weight is " << weight << endl;
	cout << name << " food is " << food << endl;
	cout << name << " water is " << water << endl;
}

void CCat::eat(int food)
{

}

void CCat::drink(int water)
{

}
void CCat::sleep(int hours)
{

}
void CCat::sport(int hours)
{

}
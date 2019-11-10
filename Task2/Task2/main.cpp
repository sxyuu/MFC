//#include "stdafx.h"
#include "iostream"
#include <string>
#include "Cat.h"
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;

void CatTest1();//测试1
void CatTest2();//测试2
void CatTest3();//测试3
void CatTest4();//测试4
void CatOneMonth();//猫的一个月

int main()
{
	//请注意，在Test1完成前请不要提交，否则会出现中断
	cout << "///////////////////////Qestion1/////////////////" << endl;
	CatTest1();
	cout << "///////////////////////Qestion2/////////////////" << endl;
	CatTest2();
	cout << "///////////////////////Qestion3/////////////////" << endl;
	CatTest3();
	cout << "///////////////////////Qestion4/////////////////" << endl;
	CatTest4();
	cout << "///////////////////////Qestion5/////////////////" << endl;
	CatOneMonth();
	system("pause");
	return 0;

}


void CatTest1()     //猫的测试
{
	CCat cat("MaoMi");
	cat.talk();

	ofstream out("out.txt");
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight <<" " << cat.food << " " << cat.water << endl;
	}
}

void CatTest2()     //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);                         //吃10点食物
	cat.drink(5);                       //喝5点水
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest3()     //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);             //吃10点食物
	cat.drink(5);            //喝5点水
	cat.sleep(4);           //睡4小时
	cat.sleep(2);
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}

}

void CatTest4()     //猫的测试
{
	CCat cat("MaoMi");
	cat.eat(10);     //吃10点食物      
	cat.drink(5);    // 喝5点水
	cat.sleep(4);      //睡4小时
	cat.sport(1);       //运动1小时
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatOneMonth()
{
	CCat cat("MaoMi");
	////////////////////////////////
	//请再此添加代码,请自行完成测试程序，然后提交

	///////////////////////////////
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}




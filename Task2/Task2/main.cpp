//#include "stdafx.h"
#include "iostream"
#include <string>
#include "Cat.h"
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <sstream>

using namespace std;

void CatTest1();//����1
void CatTest2();//����2
void CatTest3();//����3
void CatTest4();//����4
void CatOneMonth();//è��һ����

int main()
{
	//��ע�⣬��Test1���ǰ�벻Ҫ�ύ�����������ж�
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


void CatTest1()     //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.talk();

	ofstream out("out.txt");
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight <<" " << cat.food << " " << cat.water << endl;
	}
}

void CatTest2()     //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);                         //��10��ʳ��
	cat.drink(5);                       //��5��ˮ
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}

void CatTest3()     //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);             //��10��ʳ��
	cat.drink(5);            //��5��ˮ
	cat.sleep(4);           //˯4Сʱ
	cat.sleep(2);
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}

}

void CatTest4()     //è�Ĳ���
{
	CCat cat("MaoMi");
	cat.eat(10);     //��10��ʳ��      
	cat.drink(5);    // ��5��ˮ
	cat.sleep(4);      //˯4Сʱ
	cat.sport(1);       //�˶�1Сʱ
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
	//���ٴ���Ӵ���,��������ɲ��Գ���Ȼ���ύ

	///////////////////////////////
	cat.talk();

	ofstream out("out.txt", ios::app);
	if (out.is_open())
	{
		out << cat.name << " " << cat.age << " " << cat.weight << " " << cat.food << " " << cat.water << endl;
	}
}




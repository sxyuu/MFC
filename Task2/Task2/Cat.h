#pragma once
#include <string>

using namespace std;

class CCat
{
public:
	CCat(const string& name);
	~CCat();

	//��������г�����ĺ��������������������
	void talk();
	void eat(int food);
	void drink(int water);
	void sleep(int hours);
	void sport(int hours);

public:
	string name;//����
	int food;//ʳ��
	int water;//ˮ
	int weight;//����
	int age;//����


};


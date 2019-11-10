#pragma once
#include <string>

using namespace std;

class CCat
{
public:
	CCat(const string& name);
	~CCat();

	//这里仅是列出必须的函数，函数体请自行添加
	void talk();
	void eat(int food);
	void drink(int water);
	void sleep(int hours);
	void sport(int hours);

public:
	string name;//名字
	int food;//食物
	int water;//水
	int weight;//体重
	int age;//年龄


};


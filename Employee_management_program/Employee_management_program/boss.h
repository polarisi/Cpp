#pragma once

#include <iostream>

using namespace std;

#include "Worker.h"

//老板类
class Boss :public Worker
{
public:
	//构造函数
	Boss(int id, string name, int iId);
	//显示个人信息
	virtual void showInfo();
	//获取岗位名称
	virtual string getDeptName();
};

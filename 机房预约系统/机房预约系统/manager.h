#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Identity.h"
#include <fstream>
#include  "globalFile.h"
#include <vector>
#include "student.h"
#include "teacher.h"
#include <algorithm>
#include "computerRoom.h"
//管理员的类的设计
class Manager :public Identity
{
public:
	//默认构造
	Manager();
	//有参构造
	Manager(string name, string pwd);
	//菜单界面
	virtual void openMenu();
	//添加账号
	void addPerson();
	//查看账号
	void showPerson();
	//查看机房信息
	void showRoom();
	//清空预约记录
	void cleanFile();

	//初始化容器
	void initVector();

	//检测重复  参数一 学号/员工号 参数二 检测类型
	bool checkRepeat(int id, int type);

	//学生容器
	vector<Student>vStu;
	//教师容器 
	vector<Teacher>vTea;

	//机房容器
	vector<ComputerRoom> vCom;

};
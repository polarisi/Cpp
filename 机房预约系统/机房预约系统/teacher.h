#pragma once
#include <iostream>
using namespace std;

#include "Identity.h"
#include "computerRoom.h"
#include "globalFile.h"
#include "orderFile.h"
#include "student.h"
class Teacher :public Identity
{
public:
	//默认构造
	Teacher();
	//有参构造
	Teacher(int empId, string name, string pwd);
	//菜单界面
	virtual void openMenu();
	//查看所有学生的预约
	void showAllOrder();
	//审核预约
	void validOrder();

	int m_EmpId;//教师编号

};
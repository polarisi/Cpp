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
	//Ĭ�Ϲ���
	Teacher();
	//�вι���
	Teacher(int empId, string name, string pwd);
	//�˵�����
	virtual void openMenu();
	//�鿴����ѧ����ԤԼ
	void showAllOrder();
	//���ԤԼ
	void validOrder();

	int m_EmpId;//��ʦ���

};
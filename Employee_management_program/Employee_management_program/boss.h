#pragma once

#include <iostream>

using namespace std;

#include "Worker.h"

//������
class Boss :public Worker
{
public:
	//���캯��
	Boss(int id, string name, int iId);
	//��ʾ������Ϣ
	virtual void showInfo();
	//��ȡ��λ����
	virtual string getDeptName();
};
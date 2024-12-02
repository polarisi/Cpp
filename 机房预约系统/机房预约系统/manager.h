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
//����Ա��������
class Manager :public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();
	//�вι���
	Manager(string name, string pwd);
	//�˵�����
	virtual void openMenu();
	//����˺�
	void addPerson();
	//�鿴�˺�
	void showPerson();
	//�鿴������Ϣ
	void showRoom();
	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//����ظ�  ����һ ѧ��/Ա���� ������ �������
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student>vStu;
	//��ʦ���� 
	vector<Teacher>vTea;

	//��������
	vector<ComputerRoom> vCom;

};
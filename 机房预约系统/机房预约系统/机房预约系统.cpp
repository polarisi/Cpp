#include <iostream>
using namespace std;

#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "globalFile.h"
#include "Identity.h"
#include <fstream>

//�������Ա���Ӳ˵�ҳ��
void managerMenu(Identity * &manager)
{
	while (true)
	{
		//���ù���Ա�Ӳ˵�
		manager->openMenu();

		//������ָ�� תΪ����ָ�� �������������ӿ�
		Manager* man = (Manager*)manager;

		int select = 0;
		//�����û���ѡ��
		cin >> select;
		if (select == 1) //����˺�
		{
			cout << "����˺�:" << endl;
			man->addPerson();

		}
		else if (select == 2) //�鿴�˺�
		{
			cout << "�鿴�˺�:" << endl;
			man->showPerson();
		}
		else if (select == 3)//�鿴����
		{
			cout << "�鿴����:" << endl;
			man->showRoom();
		}
		else if (select == 4) //���ԤԼ
		{
			cout << "���ԤԼ:" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;//���ٵ������Ķ���
			cout << "ע���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}


	}
}

//��¼���� ����1 �����ļ��� ����2 �����������
void LoginIn(string fileName, int type) 
{
	//����ָ�� ����ָ�������
	Identity *person = NULL;

	//���ļ�
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//�ж��ļ��Ƿ����
	if (!ifs.is_open())
	{
		cout << "�ļ�������" << endl;
	}
	//׼�������û�����Ϣ
	int id = 0;
	string name;
	string pwd;
	if (type == 1)
	{
		//ѧ�����
		cout << "���������ѧ�ţ�" << endl;
		cin >> id;
	}
	else if (type  == 2)
	{
		//��ʦ���
		cout << "���������Ա���ţ�" << endl;
		cin >> id;
	}
	cout << "�������û�����" << endl;
	cin >> name;
	cout << "���������룺" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//ѧ����ݵ���֤
		int fId;//���ļ��ж�ȡ��id
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ���ȡ������
		while (ifs >> fId && ifs >> fName && ifs>> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "ѧ����֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//�����ʦ��ݵ��Ӳ˵�

				return;
			}
		}
	}
	else if (type == 2)
	{
		//��ʦ�������֤
				
		int fId;//���ļ��ж�ȡ��id
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ���ȡ������
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "��ʦ��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//�����ʦ��ݵ��Ӳ˵�

				return;
			}
		}
	}
	else if (type == 3)
	{
		//����Ա�����֤
		
		string fName;//���ļ��л�ȡ������
		string fPwd;//���ļ���ȡ������
		while ( ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if ( fName == name && fPwd == pwd)
			{
				cout << "����Ա��֤��¼�ɹ���" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//�������Ա��ݵ��Ӳ˵�
				managerMenu(person);
				return;
			}
		}

	}

		cout << "��֤��¼ʧ�ܣ�" << endl;
		system("pause");
		system("cls");
		return;


}

int main()
{
	int choice = 0;

	while (true)
	{
		cout << "=============��ӭ�������ǲ��ͻ���ԤԼϵͳ============="
			<< endl;
		cout << endl << "�������������" << endl;
		cout << "\t\t----------------------\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     1.ѧ������     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     2.��ʦ         |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     3.����Ա       |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     0.�˳�         |\n";
		cout << "\t\t----------------------\n";

		cout << "��������ѡ��:";
		cin >> choice;  //�����û���ѡ��
		switch (choice)         //�����û���ѡ�� ʵ�ֲ�ͬ�Ľӿ�
		{
		case 0:
			cout << "��ӭ�´�ʹ��!" << endl;
			system("pause");
			//exit(0);
			return 0;
			break;
		case 1:  //ѧ�����
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:  //��ʦ
			LoginIn(TEACHER_FILE, 2);

			break;
		case 3:  //����Ա
			LoginIn(ADMIN_FILE, 3);

			break;
		default:
			cout << "�������������²�����" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}
#include <iostream>
#include"WorkerManager.h"

//#include "Worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"
using namespace std;

int main()
{
	////����
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->showInfo();//��̬�����ڶ���һ������ʾ������Ҳ��һ��
	//delete worker;

	//worker = new Manager(2, "����", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;

	//ʵ���������߶���
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		
		//����չʾ�˵���Ա����
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1://����ְ����Ϣ
			wm.Add_Emp();
			break;
		case 2://��ʾְ����Ϣ
			wm.Show_Emp();
			break;
		case 3://ɾ����ְְ��
		    //{
			////����
			//int ret = wm.IsExist(1);
			//if (ret != -1)
			//{
			//	cout << "ְ������" << endl;
			//}
			//else
			//{
			//	cout << "ְ��������" << endl;
			//}
			//}

			wm.Del_Emp();
			break;
		
		case 4://�޸�ְ����Ϣ
			wm.Mod_Emp();
			break;
		case 5://.����ְ����Ϣ
			wm.Find_Emp();
			break;
		case 6://���ձ��˳��
			wm.Sort_Emp();
			break;
		case 7://��������ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}

	}
	
	system("pause");
	return 0;
}
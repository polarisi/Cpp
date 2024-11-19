#include <iostream>
#include"WorkerManager.h"

//#include "Worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"
using namespace std;

int main()
{
	////测试
	//Worker* worker = NULL;
	//worker = new Employee(1, "张三", 1);
	//worker->showInfo();//多态，由于对象不一样，显示的内容也不一样
	//delete worker;

	//worker = new Manager(2, "李四", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "王五", 3);
	//worker->showInfo();
	//delete worker;

	//实例化管理者对象
	WorkerManager wm;

	int choice = 0;
	while (true)
	{
		
		//调用展示菜单成员函数
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出系统
			wm.ExitSystem();
			break;
		case 1://增加职工信息
			wm.Add_Emp();
			break;
		case 2://显示职工信息
			wm.Show_Emp();
			break;
		case 3://删除离职职工
		    //{
			////测试
			//int ret = wm.IsExist(1);
			//if (ret != -1)
			//{
			//	cout << "职工存在" << endl;
			//}
			//else
			//{
			//	cout << "职工不存在" << endl;
			//}
			//}

			wm.Del_Emp();
			break;
		
		case 4://修改职工信息
			wm.Mod_Emp();
			break;
		case 5://.查找职工信息
			wm.Find_Emp();
			break;
		case 6://按照编号顺序
			wm.Sort_Emp();
			break;
		case 7://清空所有文档
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
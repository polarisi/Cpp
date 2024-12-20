#include <iostream>
using namespace std;

#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "globalFile.h"
#include "Identity.h"
#include <fstream>


//学生菜单
void studentMenu(Identity*& student)
{
	while (true)
	{
		//调用学生子菜单
		student->openMenu();

		Student* stu = (Student*)student;

		int select = 0;
		cin >> select; //接受用户选择  
		if (select  == 1)//申请预约
		{
			stu->applyOrder();
		}
		else if (select == 2)//查看自身预约
		{
			stu->showMyOrder();
		}
		else if (select == 3)//查看所有人预约
		{
			stu->showAllOrder();
		}
		else if (select == 4)//取消 预约
		{
			stu->cancelOrder();
		}
		else//注销登录
		{
			delete student;//销毁掉堆区的对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}

//教师菜单
void TeacherMenu(Identity*& teacher)
{
	while (true)
	{
		//调用学生子菜单
		teacher->openMenu();

		Teacher* tea = (Teacher*)teacher;

		int select = 0;
		cin >> select; //接受用户选择

		if (select == 1)//查看所有预约
		{
			tea->showAllOrder();
		}
		else if (select == 2)//审核预约
		{
			tea->validOrder();
		}
		else//注销登录
		{
			delete teacher;//销毁掉堆区的对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}

	}
}


//进入管理员的子菜单页面
void managerMenu(Identity * &manager)
{
	while (true)
	{
		//调用管理员子菜单
		manager->openMenu();

		//将父类指针 转为子类指针 调用子类其他接口
		Manager* man = (Manager*)manager;

		int select = 0;
		//接收用户的选择
		cin >> select;
		if (select == 1) //添加账号
		{
			cout << "添加账号:" << endl;
			man->addPerson();

		}
		else if (select == 2) //查看账号
		{
			cout << "查看账号:" << endl;
			man->showPerson();
		}
		else if (select == 3)//查看机房
		{
			cout << "查看机房:" << endl;
			man->showRoom();
		}
		else if (select == 4) //清空预约
		{
			cout << "清空预约:" << endl;
			man->cleanFile();
		}
		else
		{
			delete manager;//销毁掉堆区的对象
			cout << "注销成功" << endl;
			system("pause");
			system("cls");
			return;
		}


	}
}

//登录功能 参数1 操作文件名 参数2 操作身份类型
void LoginIn(string fileName, int type) 
{
	//父类指针 用于指向父类对象
	Identity *person = NULL;

	//读文件
	ifstream ifs;
	ifs.open(fileName, ios::in);

	//判断文件是否存在
	if (!ifs.is_open())
	{
		cout << "文件不存在" << endl;
	}
	//准备接受用户的信息
	int id = 0;
	string name;
	string pwd;
	if (type == 1)
	{
		//学生身份
		cout << "请输入你的学号：" << endl;
		cin >> id;
	}
	else if (type  == 2)
	{
		//老师身份
		cout << "请输入你的员工号：" << endl;
		cin >> id;
	}
	cout << "请输入用户名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	if (type == 1)
	{
		//学生身份的验证
		int fId;//从文件中读取的id
		string fName;//从文件中获取的密码
		string fPwd;//从文件读取的密码
		while (ifs >> fId && ifs >> fName && ifs>> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "学生验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Student(id, name, pwd);
				//进入学生身份的子菜单
				studentMenu(person);
				return;
			}
		}
	}
	else if (type == 2)
	{
		//教师的身份验证
				
		int fId;//从文件中读取的id
		string fName;//从文件中获取的姓名
		string fPwd;//从文件读取的密码
		while (ifs >> fId && ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if (fId == id && fName == name && fPwd == pwd)
			{
				cout << "教师验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Teacher(id, name, pwd);
				//进入教师身份的子菜单
				TeacherMenu(person);
				return;
			}
		}
	}
	else if (type == 3)
	{
		//管理员身份验证
		
		string fName;//从文件中获取的姓名
		string fPwd;//从文件读取的密码
		while ( ifs >> fName && ifs >> fPwd)
		{
			//cout << fId << " " << fName << " " << fPwd << endl;
			if ( fName == name && fPwd == pwd)
			{
				cout << "管理员验证登录成功！" << endl;
				system("pause");
				system("cls");
				person = new Manager(name, pwd);
				//进入管理员身份的子菜单
				managerMenu(person);
				return;
			}
		}

	}

		cout << "验证登录失败！" << endl;
		system("pause");
		system("cls");
		return;


}


int main()
{
	int choice = 0;

	while (true)
	{
		cout << "=============欢迎来到传智播客机房预约系统============="
			<< endl;
		cout << endl << "请输入您的身份" << endl;
		cout << "\t\t----------------------\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     1.学生代表     |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     2.老师         |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     3.管理员       |\n";
		cout << "\t\t|                    |\n";
		cout << "\t\t|     0.退出         |\n";
		cout << "\t\t----------------------\n";

		cout << "输入您的选择:";
		cin >> choice;  //接受用户的选择
		switch (choice)         //根据用户的选择 实现不同的接口
		{
		case 0:
			cout << "欢迎下次使用!" << endl;
			system("pause");
			//exit(0);
			return 0;
			break;
		case 1:  //学生身份
			LoginIn(STUDENT_FILE, 1);
			break;
		case 2:  //老师
			LoginIn(TEACHER_FILE, 2);

			break;
		case 3:  //管理员
			LoginIn(ADMIN_FILE, 3);

			break;
		default:
			cout << "输入有误，请重新操作！" << endl;
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}
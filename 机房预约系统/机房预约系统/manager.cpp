#include "manager.h"

//默认构造
Manager::Manager()
{

}
//有参构造
Manager::Manager(string name, string pwd)
{
	//初始化管理员信息
	this->m_Name = name;
	this->m_Pwd = pwd;
	//初始化容器  获取文件中的学生和老师信息
	this->initVector();

	//初始化 获取机房信息
	ifstream ifs;

	ifs.open(COMPUTER_FILE, ios::in);

	ComputerRoom c;
	while (ifs>>c.m_ComId && ifs >> c.m_MaxNum)
	{
		vCom.push_back(c);
	}
	//cout << "当前机房数量为：" << vCom.size() << endl;
	ifs.close();
	//因为机房信息目前版本不会有所改动，如果后期有修改功能，最好封装到一个函数中，方便维护

}
//菜单界面
void Manager::openMenu()
{
	cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;

	cout << "\t\t----------------------\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     1.添加账号     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     2.查看账号     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     3.查看机房     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     4.清空预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     0.注销登录     |\n";
	cout << "\t\t----------------------\n";
	cout << "请选择您的操作：" << endl;
}
//添加账号
void Manager::addPerson()
{
	string filename;  //操作文件名
	string tip;      //提示id号
	string errorTip; //重复错误提示

	ofstream  ofs;   //文件对象操作

	int select = 0;
	while (true)
	{
		cout << "请输入添加账号的类型" << endl;
		cout << "1.添加学生" << endl;
		cout << "2.添加老师" << endl;
		cin >> select;
		if (select == 1)
		{
			filename = STUDENT_FILE;
			tip = "请输入学号：";
			errorTip = "学号重复,请重新输入";
			break;
		}
		else if(select == 2)
		{
			filename = TEACHER_FILE;
			tip = "请输入员工编号:";
			errorTip = "员工号重复,请重新输入";
			break;
		}
		else
		{
			cout << "输入错误,请重新输入！" << endl;
		}
	}
	
	ofs.open(filename, ios::out | ios::app);//打开 追加 
	int id;//学号或员工号
	string name;//姓名
	string pwd;//密码

	cout << tip << endl;

	while (true)
	{
		cin >> id;
		bool ret = checkRepeat(id, select);
		if (ret)//有重复
		{
			cout << errorTip << endl;
		}
		else
		{
			break;
		}
	}

	cout << "请输入姓名：" << endl;
	cin >> name;
	cout << "请输入密码：" << endl;
	cin >> pwd;

	//向文件中添加数据
	ofs << id << " " << name << " " << pwd << endl;
	cout << "添加成功" << endl;

	system("pause");
	system("cls");
	ofs.close();

	this->initVector();

}


void printStudent(Student &s)
{
	cout << "学号是：" << s.m_Id << " 姓名是：" << s.m_Name << " 密码是：" << s.m_Pwd << endl;
}
void printTeacher(Teacher& t)
{
	cout << "学号是：" << t.m_EmpId << " 姓名是：" << t.m_Name << " 密码是：" << t.m_Pwd << endl;
}
//查看账号
void Manager::showPerson()
{
	cout << "请选择查看内容：" << endl;
	cout << "1.查看所有学生" << endl;
	cout << "2.查看所有老师" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		cout << "所有学生信息如下：" << endl;
		for_each(vStu.begin(), vStu.end(), printStudent);
	}
	else if (select == 2)
	{
		cout << "所有老师 信息如下：" << endl;
		for_each(vTea.begin(), vTea.end(), printTeacher);
	}

	system("pause");
	system("cls");
}
//查看机房信息
void Manager::showRoom()
{
	cout << "机房信息如下：" << endl;
	for (vector<ComputerRoom>::iterator it = vCom.begin(); it != vCom.end(); it++)
	{
		cout << "机房编号：" << it->m_ComId << "机房最大容量：" << it->m_MaxNum << endl;
	}
	system("pause");
	system("cls");
}
//清空预约记录
void Manager::cleanFile()
{
	ofstream ofs(ORDER_FILE, ios::trunc);
	ofs.close();
	cout << "清空成功" << endl;
	system("pause");
	system("cls");
}

//初始化容器
void Manager:: initVector()
{
	//读取学生文件中的信息
	ifstream ifs;
	ifs.open(STUDENT_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	vStu.clear();
	

	Student s;
	while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd)
	{
		vStu.push_back(s);

	}
	//cout << "当前学生数量为：" << vStu.size() << endl;
	ifs.close();//学生初始化结束

	//读取老师文件中的信息
	//ifstream ifs;
	ifs.open(TEACHER_FILE, ios::in);
	if (!ifs.is_open())
	{
		cout << "文件读取失败" << endl;
		return;
	}

	vTea.clear();

	Teacher t;
	while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd)
	{
		vTea.push_back(t);

	}
	//cout << "当前学生数量为：" << vTea.size() << endl;
	ifs.close();//教师初始化结束

}

//检测重复  参数一 学号/员工号 参数二 检测类型
bool Manager::checkRepeat(int id, int type)
{
	if (type == 1)
	{
		//检测学生
		for (vector<Student>::iterator it = vStu.begin(); it != vStu.end(); it++)
		{
			if (id == it->m_Id)
			{
				return true;
			}
		}
	}
	else
	{
		//检测老师
		for (vector<Teacher>::iterator it = vTea.begin(); it != vTea.end(); it++)
		{
			if (id == it->m_EmpId)
			{
				return true;
			}
		}
	}
	return false;
}
#include "teacher.h"

//默认构造
Teacher::Teacher()
{

}
//有参构造
Teacher::Teacher(int empId, string name, string pwd)
{
	//初始化
	this->m_EmpId = empId;
	this->m_Name = name;
	this->m_Pwd = pwd;


}
//菜单界面
void Teacher::openMenu()
{
	cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;

	cout << "\t\t----------------------\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     1.查看所有预约 |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     2.审核预约     |\n";
	cout << "\t\t|                    |\n";
	cout << "\t\t|     0.注销登录     |\n";
	cout << "\t\t----------------------\n";
	cout << "请选择您的操作：" << endl;
}
//查看所有学生的预约
void Teacher::showAllOrder()
{
	Student s;
	s.showAllOrder();

}
//审核预约
void Teacher::validOrder()
{

	OrderFile of;
	if (of.m_Size == 0)
	{
		cout << "无预约记录！" << endl;
		system("pause");
		system("cls");
		return;
	}

	cout << "待审核的记录如下：" << endl;

	vector<int>v;
	int index = 1;
	for (int i = 0; i < of.m_Size; i++)
	{
		if (of.m_orderData[i]["status"] == "1" )//判断状态
			{
				v.push_back(i);
				cout << index++ << "、";
				cout << "预约日期：周" << of.m_orderData[i]["date"];
				cout << " 时间段：" << (of.m_orderData[i]["interval"] == "1" ? "上午" : "下午");
				cout << " 学号：" << of.m_orderData[i]["stuId"];
				cout << " 姓名：" << of.m_orderData[i]["stuName"];
				cout << " 机房号：" << of.m_orderData[i]["roomId"];
				string status = " 状态：审核中";//1审核中 2已预约 -1预约失败 0取消预约
				cout << status << endl;
			}
		
	}

	cout << "请输入审核的预约记录，0代表返回" << endl;
	int select = 0;
	int ret = 0;
	while (true)
	{
		cin >> select;
		if (select >= 0 && select <= v.size())
		{
			if (select == 0)
			{
				break;

			}
			else
			{
				cout << "请输入审核结果：" << endl;
				cout << "1.通过" << endl;
				cout << "2.不通过" << endl;
				cin >> ret;
				if (ret == 1)
				{
					of.m_orderData[v[select - 1]]["status"] = "2";

				}
				else
				{
					of.m_orderData[v[select - 1]]["status"] = "-1";

				}
				cout << "审核完毕" << endl;
				of.updateOrder();
				break;
			}
		}
		cout << "输入有误，请重新输入" << endl;

	}

	system("pause");
	system("cls");
}
//封装函数显示该界面
//在main函数中调用封装好的函数
#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

#define MAX 1000

//设计联系人的结构
struct Person
{
	//姓名
	string m_Name;
	//性别 1男 2女
	int m_Sex;
	//年龄
	int m_Age;
	//电话
	string m_Phone;
	//住址
	string m_Addr;
};

//设计通讯录的结构体
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_Size;
};

//菜单界面
void showMenu()
{
	cout << "**********************" << endl;
	cout << "*****1.添加联系人*****" << endl;
	cout << "*****2.显示联系人*****" << endl;
	cout << "*****3.删除联系人*****" << endl;
	cout << "*****4.查找联系人*****" << endl;
	cout << "*****5.修改联系人*****" << endl;
	cout << "*****6.清空联系人*****" << endl;
	cout << "*****0.退出通讯录*****" << endl;
	cout << "**********************" << endl;


}


//1.添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已满，满了则不再添加
	if (abs->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体的联系人

		//姓名
		cout << "请输入姓名：  " << endl;
		//string name;
		//cin >> name;
		//abs->personArray[abs->m_Size].m_Name = name;
		cin >> abs->personArray[abs->m_Size].m_Name;
		//性别
		cout << "请输入性别：  " << endl;
		cout << "    1——男    " << endl;
		cout << "    2——女    " << endl;
		int sex = 0;
		while (true)
		{
			//如果输入的是1或2则正确，退出循环，否则重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入！" << endl;
			}
		}
	
		//年龄
		cout << "请输入年龄0~150：  " << endl;
		int age = 0;
		while (true)
		{
			//如果输入的是1或2则正确，退出循环，否则重新输入
			cin >> age;
			if (age >=0 && age<=150)
			{
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入！" << endl;
			}
		}
		//电话
		cout << "请输入联系电话：  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入地址：  " << endl;
		string addr;
		cin >> addr;
		abs->personArray[abs->m_Size].m_Addr = addr;

		//更新一下通讯录的人数
		abs->m_Size++;

		cout << "添加成功！" << endl;

		system("pause");//请按任意键继续
		system("cls");
	}
}

//2.显示联系人
void showPerson(Addressbooks * abs)
{
	//判断通讯录是否为0；如果为0，提示记录为空
	//如果不为0，显示联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		cout << left << setw(20) << "姓名："
					 << setw(8) << "姓别："
					 << setw(8) << "年龄："
					 << setw(15) << "电话："
					 << setw(30) << "住址：" << endl;
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << left << setw(20) << abs->personArray[i].m_Name
				<< setw(8) << (abs->personArray[i].m_Sex == 1 ? "男" : "女")
				<< setw(8) << abs->personArray[i].m_Age
				<< setw(15) << abs->personArray[i].m_Phone
				<< setw(30) << abs->personArray[i].m_Addr << endl;

		}
	}
	system("pause");//请按任意键继续
	system("cls");
}


//3.删除联系人

//检查联系人是否存在
//如果存在，返回联系人在数组中的具体位置，否则返回-1
//参数1 通讯录 参数2 对比姓名
int checkPerson(Addressbooks * abs, string name)
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		if (abs->personArray[i].m_Name == name)
			return i;  //找到了返回下标

	}
	return -1;
}

void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;
	int ret = checkPerson(abs, name);
	if (ret == -1)
	{
		cout << "查无此人" << endl;
		
	}
		
	else
	{
		for (int i = ret; i < abs->m_Size; i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}

	system("pause");//请按任意键继续
	system("cls");
}

//4.查找联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的人" << endl;
	string name;
	cin >> name;

	int ret = checkPerson(abs, name);
	if (ret != -1)
	{
		cout << left << setw(20) << "姓名："
			<< setw(8) << "姓别："
			<< setw(8) << "年龄："
			<< setw(15) << "电话："
			<< setw(30) << "住址：" << endl;
		cout << left << setw(20) << abs->personArray[ret].m_Name
			<< setw(8) << (abs->personArray[ret].m_Sex == 1 ? "男" : "女")
			<< setw(8) << abs->personArray[ret].m_Age
			<< setw(15) << abs->personArray[ret].m_Phone
			<< setw(30) << abs->personArray[ret].m_Addr << endl;
		}
	else
	{
		cout << "未找到联系人" << endl;
	}
	system("pause");//请按任意键继续
	system("cls");
}

//修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "请输入您要修改的联系人" << endl;
	string name;
	cin >> name;
	int ret = checkPerson(abs, name);
	if (ret == -1)
	{
		cout << "未找到联系人" << endl;

	}
	else
	{
		cout << "请输入您要修改的信息" << endl;
		
		cout << "请输入姓名：  " << endl;
		string name;
		cin >> name;
        abs->personArray[ret].m_Name = name;
		
		cout << "请输入姓别：  " << endl;
		cout << "    1——男    " << endl;
		cout << "    2——女    " << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;

		}
		

		cout << "请输入年龄：  " << endl;
		int age = 0;
		cin >> age;
        abs->personArray[ret].m_Age = age;
		
		cout << "请输入电话：  " << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		
		cout << "请输入地址：  " << endl;
		string addr;
		cin >> addr;
		abs->personArray[ret].m_Addr = addr;

		cout << "修改成功" << endl;


	}

	system("pause");//请按任意键继续
	system("cls");
}


//清空联系人
void cleanPerson(Addressbooks* abs)
{
	abs->m_Size = 0;
	cout << "通讯录已清空" << endl;

	system("pause");//请按任意键继续
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;  //创建用户输入的结果

	


	while (true)
	{
		//菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:
			addPerson(&abs);//1.添加联系人  利用地址传递，可以修饰形参
			break;
		case 2:
			showPerson(&abs);//2.显示联系人
			break;
		case 3:              //3.删除联系人
		//{
		//	cout << "姓名" << endl;
		//	string nam;
		//	cin >> nam;
		//	//checkPerson(&abs, nam);
		//	if (checkPerson(&abs, nam) == -1)
		//	{
		//		cout << "查无此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到此人" << endl;
		//	}
		//	break;
		//}
			deletePerson(&abs);
			break;
		case 4:
			findPerson(&abs); //4.查找联系人
			break;
		case 5:
			modifyPerson(&abs);//5.修改联系人
			break;
		case 6:
			cleanPerson(&abs);//6.清空联系人
			break;
		case 0:
			cout << "欢迎下次使用" << endl;           //0.退出通讯录
			system("pause");
			return 0;
			break;
		default:
			break;
		}

	}

	
	system("pause");
	return 0;
}
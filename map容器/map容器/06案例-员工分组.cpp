//公司今天招聘了10个员工(ABCDEFGHI)，10名员工进入公司之后，需要指派员工在那个部门工作
//员工信息有: 姓名T工资组成; 部门分为:策划、美术、研发
//随机给10名员工分配部门和工资
//通过multimap进行信息的插入 key(部门编号)value(员工)
//分部门显示员工信息
//
//实现步骤
//创建10名员工，放到vector中
//遍历vector容器，取出每个员工，进行随机分组
//分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
//分部门显示员工信息

#include <iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2	

//员工创建
class Person
{
public:


	string m_Name;
	int m_Salary;
};
//创建员工
void createPerson(vector<Person>& p)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Person pp;
		pp.m_Name = "员工";
		pp.m_Name += nameSeed[i];
		pp.m_Salary = rand() % 10000 + 10000; //10000~19999

		p.push_back(pp);
	}
}

void setGroup(vector<Person>&p, multimap<int, Person>&m)
{
	for (vector<Person>::iterator it = p.begin(); it != p.end(); it++)
	{
		//随机产生员工编号
		int deptID = rand() % 3;
		//将员工插入到分组中
		//key部门编号 value具体员工
		m.insert(make_pair(deptID, *it));
	}
}

void showPersonByGroup(multimap<int, Person>& s)
{

		//0 A B C D  1 E  F G
		cout << "策划部门信息：" << endl;
		multimap<int, Person>::iterator pos = s.find(CEHUA);
		int  count = s.count(CEHUA);//统计策划部门的人数
		for (int i = 0; i < count; i++)
		{
			cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
			pos++;
		}


		//int index = 0;
		//for ( ; pos != s.end() && index < count; pos++ ,index++)
		//{
		//		cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;

		//}
		cout << "--------------------" << endl;

		cout << "美术部门信息：" << endl;
		pos = s.find(MEISHU);
		count = s.count(MEISHU);//统计美术部门的人数
		for (int i = 0; i < count; i++)
		{
			cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
			pos++;
		}


		cout << "--------------------" << endl;

		cout << "研发部门信息：" << endl;
		pos = s.find(YANFA);
		count = s.count(YANFA);//统计研发部门的人数
		for (int i = 0; i < count; i++)
		{
			cout << "姓名：" << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
			pos++;
		}




}



int main()
{
	//添加随机种子
	srand((unsigned int)time(NULL));

	//1.创建员工
	vector<Person>vPerson;
	createPerson(vPerson);
	////测试
	//for (vector<Person>::iterator it = vPerson.begin(); it != vPerson.end(); it++)
	//{
	//	cout << "姓名：" << it->m_Name << "  工资：" << it->m_Salary << endl;
	//}

	//2.员工分组
	multimap<int, Person>mPerson;
	setGroup(vPerson, mPerson);

	//3.分组显示员工
	showPersonByGroup(mPerson);


	system("pause");
	return 0;
}
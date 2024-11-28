#include <iostream>
using namespace std;
#include<set>

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class compare
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void printSet(set<Person, compare> &s)
{
	for (set<Person, compare>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age  << endl;;
	}
	cout << endl;
}

void test01()
{
	//对于自定义的数据类型 需要自定义排序规则
	set<Person, compare>s1;
	Person p1("刘备", 52);
	Person p2("张飞", 32);
	Person p3("关羽", 29);
	Person p4("赵云", 25);


	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	//s1.insert(19);

	printSet(s1);


	////拷贝构造
	//set<int>s2(s1);
	//printSet(s2);

	////赋值
	//set<int>s3;
	//s3 = s2;
	//printSet(s3);


}
int main()
{
	test01();
	system("pause");
	return 0;
}
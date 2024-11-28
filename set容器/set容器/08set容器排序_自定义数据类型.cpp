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
	//�����Զ������������ ��Ҫ�Զ����������
	set<Person, compare>s1;
	Person p1("����", 52);
	Person p2("�ŷ�", 32);
	Person p3("����", 29);
	Person p4("����", 25);


	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	//s1.insert(19);

	printSet(s1);


	////��������
	//set<int>s2(s1);
	//printSet(s2);

	////��ֵ
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
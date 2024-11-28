#include <iostream>
using namespace std;
#include<list>
#include<string>
//��������:��Person�Զ����������ͽ�������Person�����������������䡢���
// �������:������������������������ͬ������߽��н���


class Person
{
public:

	Person(string name, int age, int height)
	{
		this->m_Name = name;
		this->m_Age = age;
		this->m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};


bool myCompare(Person& P1, Person P2)
{
	//return P1.m_Age < P2.m_Age;

	if (P1.m_Age == P2.m_Age)
	{
		return P1.m_Height < P2.m_Height;
	}
	return P1.m_Age < P2.m_Age;



}

void test01()
{
	list<Person> L;//��������

	//׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25,190);
	Person p5("�ŷ�", 35, 160); 
	Person p6("����", 35, 200);
	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);


	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << endl;
	}

	//�����
	cout << "----------------------" << endl;
	cout << "�����" << endl;


	L.sort(myCompare);

	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}
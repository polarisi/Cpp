////replace(iterator beg, iterator end, oldvalue, newvalue);
//// �������ھ�Ԫ�� �滻�� ��Ԫ��
//// beg ��ʼ������
//// end ����������
//// oldvalue ��Ԫ��
//// newvalue ��Ԫ��
//
//
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include<functional>
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test01()
//{
//	vector<int>v;
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//
//	for_each(v.begin(), v.end(), MyPrint()); //MyPrint�Ƿº��� ����()
//	cout << endl;
//
//	//�滻
//
//	replace(v.begin(), v.end(), 2, 3);
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), myPrint);//myPrint ����ͨ����
//	cout << endl;
//
//
//
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	bool operator==(const Person& p)
//	{
//		if ( this->m_Name == p.m_Name &&this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	
//	string m_Name;
//	int m_Age;
//};
//void showPerson(Person& p)
//{
//	cout << p.m_Name << " " << p.m_Age << endl;
//}
//void test02()
//{
//	vector<Person>v;
//	Person p1("a", 1);
//	Person p2("s", 1);
//	Person p3("d", 2);
//	Person p4("b", 3);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	
//	for_each(v.begin(), v.end(), showPerson); //MyPrint�Ƿº��� ����()
//	cout << endl;
//
//	Person p("z", 6);
//
//
//	//replace(v.begin(), v.end(), p1, p);
//
//	replace(v.begin(), v.end(), Person("a", 1), Person ("z", 6));
//
//
//
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), showPerson);//myPrint ����ͨ����
//	cout << endl;
//
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
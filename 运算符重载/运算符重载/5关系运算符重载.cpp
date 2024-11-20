//#include <iostream>
//using namespace std;
////关系运算符重载
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	//重载等号
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//			return 1;
//		else
//			return 0;
//	}
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name != p.m_Name || this->m_Age != p.m_Age)
//			return 1;
//		else
//			return 0;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("lisi", 18);
//	Person p2("lisi", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//
//	}
//	if (p1 != p2)
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2相等" << endl;
//
//	}
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
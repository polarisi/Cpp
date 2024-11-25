//#include <iostream>
//using namespace std;
//#include<vector>
//#include <string>
////vector存放自定义数据类型
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//
//void test01()
//{
//	vector<Person>v;
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).m_Name << " " <<"年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << " " << "年龄：" << it->m_Age << endl;
//
//		
//	}
//}
////存放自定义数据类型 指针
//
//void test02()
//{
//	vector<Person*>v;
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	Person p4("d", 40);
//	Person p5("e", 50);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器中的数据
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		
//		cout << "新姓名：" << (*it)->m_Name << " " << "年龄：" << (*it)->m_Age << endl;
//
//
//
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
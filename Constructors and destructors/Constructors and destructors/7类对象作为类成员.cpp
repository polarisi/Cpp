//#include <iostream>
//using namespace std;
//#include <string>
////类对象作为类成员
////手机 类
//class Phone
//{
//public:
//	Phone(string name)
//	{
//		cout << "Phone的构造函数调用" << endl;
//
//		m_PName = name;
//	}
//	~Phone()
//	{
//		cout << "~Phone函数的调用" << endl;
//	}
//	//手机的品牌名称
//	string m_PName;
//};
////人 类
//class Person
//{
//public:
//	Person(string name, string pName): m_Name(name), m_Phone(pName)//相当于Phone m_Phone = pName 隐式转换法 
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "~Person函数的调用" << endl;
//	}
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//};
////当其他类的对象作为本类成员，构造时先构造类对象，再构造自身  析构的顺序与构造相反
//void test01()
//{
//	Person p("张三", "苹果MAX");
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
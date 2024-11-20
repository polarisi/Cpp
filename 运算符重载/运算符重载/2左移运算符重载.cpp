//#include <iostream>
//using namespace std;
////左移运算符重载
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p); //友元
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	//利用成员函数重载左移运算符 p.operator<<(cout) 简化版本 p<<cout
//	//因此通常不会用成员函数实现<<运算符，是因为无法实现cout在左侧
//	//void operator<<(cout)
//	//{
//
//	//}
//	int m_A;
//	int m_B;
//
//};
//
////只能利用全局函数
//ostream& operator<<(ostream &cout, Person &p) //本质operator << (cout, p) 简化为 cout << p
//{
//	cout <<"m_A = " << p.m_A << endl;
//	cout <<"m_B = " << p.m_B << endl;
//	return cout;
//}
////引用就是起别名，所以out也不会报错
////ostream& operator<<(ostream& out, Person& p) //本质operator << (cout, p) 简化为 cout << p
////{
////	out << "m_A = " << p.m_A << endl;
////	out << "m_B = " << p.m_B << endl;
////	return cout;
////}
//void test01()
//{
//	Person p(10, 10);
//	//p.m_A = 1;
//	//p.m_B = 2;
//	//cout << p.m_A << endl;
//	cout << p <<endl;//没有与这些操作数匹配的的<<运算符
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////总结:重载左移运算符配合友元可以实现输出自定义数据类型
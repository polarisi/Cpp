//#include <iostream>
//using namespace std;
////空指针调用成员函数
//
//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//
//	}
//	void showPersonAge()
//	{
//
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "age= " << m_Age << endl;
//		//相当于这个 cout << "age= " << this->m_Age << endl; 报错原因是传入指针是空指针NULL
//	}
//	int m_Age = 0;
//
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
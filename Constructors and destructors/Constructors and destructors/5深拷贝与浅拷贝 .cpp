////浅拷贝:简单的赋值拷贝操作
////深拷贝 : 在堆区重新申请空间，进行拷贝操作
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//		Person()
//		{
//			cout << "Person的无参构造函数的调用" << endl;
//		}
//		Person(int age, int height)
//		{
//			m_Age = age;
//			m_Height = new int(height);
//			cout << "Person的有参构造函数的调用" << endl;
//		}
//		//Person(const Person& p)
//		//{
//		//	//将传入的人身上的所有属性，拷贝到我身上
//		//	m_Age = p.m_Age;
//		//	cout << "Person的拷贝构造函数的调用" << endl;
//		//}
//		//自己实现拷贝构造函数 解决浅拷贝带来的问题
//		Person(const Person& p)
//		{
//			cout << "Person的拷贝构造函数的调用" << endl;
//			m_Age = p.m_Age;
//			//m_Height = p.m_Height; 编译器默认实现就是这行代码 浅拷贝
//			m_Height = new int(*p.m_Height);  //深拷贝
//
//		}
//		~Person()
//		{
//			//析构代码，将堆区开辟数据释放操作
//			if (m_Height != NULL)
//			{
//				delete m_Height;
//				m_Height = NULL;
//			}
//			cout << "~Person函数的调用" << endl;
//		}
//		int m_Age;
//		int* m_Height;
//};
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1的年龄是：" << p1.m_Age << "身高为：" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2的年龄是：" << p2.m_Age << "身高为：" << *p2.m_Height << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////总结:如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题
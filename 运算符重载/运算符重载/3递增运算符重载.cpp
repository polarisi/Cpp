//#include <iostream>
//using namespace std;
////递增运算符重载
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//重载前置++运算符
//	MyInteger& operator++()  //返回引用是为了一直对一个数据集进行递增操作
//	{
//		m_Num++;
//		return *this;
//	}
//	//重载后置++运算符
//	//int代表的是占位参数，可以用于区分前置和后置递增
//	MyInteger operator++(int)  //返回引用是为了一直对一个数据集进行递增操作
//	{
//		
//		//先 记录当时的结果
//		MyInteger temp = *this;
//		//后递增
//		m_Num++;
//		//最后将记录结果返回
//		return temp;
//	}
//private:
//	int m_Num;
//};
////重载左移运算符
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//void test01()
//{
//	MyInteger myint;
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//
//}
//void test02()
//{
//	MyInteger myint;
//	cout << myint++ << endl;
//
//	cout << (myint++)++ << endl;//不可以了
//	cout << myint << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	//int a = 5;
//	//cout << ++(++a) << endl;
//	//cout << a << endl;
//
//
//	system("pause");
//	return 0;
//}
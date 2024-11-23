////调用规则如下:
////1.如果函数模板和普通函数都可以实现，优先调用普通函数
////2.可以通过空模板参数列表来强制调用函数模板
////3.函数模板也可以发生重载
////4.如果函数模板可以产生更好的匹配, 优先调用函数模板
//
//#include <iostream>
//using namespace std;
//
////普通函数与模板函数的调用规则
//
//void myPrint(int a, int b)
//{
//	cout << "调用的是普通函数" << endl;
//}
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "调用的是模板函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用的是重载的模板函数" << endl;
//}
//
//void test01()
//{
//	int a = 1;
//	int b = 2;
//	myPrint(a, b);//调用的是普通函数
//
//	//可以通过空模板参数列表来强制调用函数模板
//	myPrint<>(a, b);
//
//	//函数模板也可以发生重载
//	int c = 3;
//	myPrint(a, b, c);
//
//	//如果函数模板可以产生更好的匹配, 优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//	myPrint(c1, c2);
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}

////总结:既然提供了函数模板，，最好就不要提供普通函数，否则容易出现二义性
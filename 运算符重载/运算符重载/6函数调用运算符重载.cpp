#include <iostream>
using namespace std;
#include <string>
//函数调用运算符重载

//打印输出类
class MyPrint
{
public:
	//函数调用运算符重载
	void operator()(string test)
	{
		cout << test << endl;

	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;
	myPrint("hello world!");//由于使用起来非常类似于函数调用，因此成为仿函数
	MyPrint02("hello!");

}

//仿函数非常灵活，没有固定的类
//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};
void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 200);
	cout << "ret = " << ret << endl;

	//匿名函数对象 用完就释放
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
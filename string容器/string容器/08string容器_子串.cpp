#include <iostream>
using namespace std;
#include <string>
//求子串

void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;

}

//实用操作

void test02()
{
	string email = "zhangsan@sina.com";
	//从邮件信息中 获取 用户信息

	int pos = email.find("@");
	string usrName = email.substr(0, pos);  //从哪个位置开始截取多少个

	cout << "usrName = " << usrName << endl;

}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#include <string>
//���Ӵ�

void test01()
{
	string str = "abcdef";

	string subStr = str.substr(1, 3);

	cout << "subStr = " << subStr << endl;

}

//ʵ�ò���

void test02()
{
	string email = "zhangsan@sina.com";
	//���ʼ���Ϣ�� ��ȡ �û���Ϣ

	int pos = email.find("@");
	string usrName = email.substr(0, pos);  //���ĸ�λ�ÿ�ʼ��ȡ���ٸ�

	cout << "usrName = " << usrName << endl;

}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

class Person
{
public:
	char m_Name[64];
	int m_Age;
	
};
void test01()
{
	//2.创建流对象
	ifstream ifs;
	//3.打开文件
	ifs.open("person.txt", ios::in | ios::binary);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	//4.读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;

	//5.关闭文件
	ifs.close();

}

int main()
{
	test01();
	system("pause");
	return 0;
}

//文件输入流对象 可以通过read函数!以二进制方式读数据
#include <iostream>
using namespace std;
#include <string>
//�����������������

//��ӡ�����
class MyPrint
{
public:
	//�����������������
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
	myPrint("hello world!");//����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
	MyPrint02("hello!");

}

//�º����ǳ���û�й̶�����
//�ӷ���
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

	//������������ ������ͷ�
	cout << MyAdd()(100, 100) << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
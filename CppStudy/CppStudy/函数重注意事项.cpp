//1.������Ϊ��������
//2.����������������Ĭ�ϲ���
# include <iostream>
using namespace std;

//1
void func(int& a)
{
	cout << "func(int& a)�ĵ���" << endl;
}

void func(const int& a)    //
{
	cout << "func(const int& a)�ĵ���" << endl;
}


//2
void func2(int a, int b = 10)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}
//int main()
//{
///*	int a = 10;
//	func(a);
//
//
//	func(10);*/   
//
//	//func2(5); //���ֶ�����
//
//	system("pause");
//	return 0;
//}
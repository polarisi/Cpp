//#include <iostream>
//using namespace std;
////���麯���ͳ�����
//class Base
//{
//public:
//	//���麯��
//	//ֻҪ��һ�����麯���������ͳ�Ϊ������
//	//�������ص�
//	//1.�޷�ʵ��������
//	//2.����������� ������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//
//};
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "Son��func()����" << endl;
//
//	}
//};
//
//void test01()
//{
//	//Base b; //���������޷�ʵ��������
//	//new Base; //���������޷�ʵ��������
//	Son s;    //����û����д�����е��麯��
//	          //���������д�����еĴ��麯���������޷�ʵ��������
//
//	Base* base = new Son; //����ָ��
//
//	base->func();
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
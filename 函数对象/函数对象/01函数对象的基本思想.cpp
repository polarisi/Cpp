//#include <iostream>
//using namespace std;
//
////�������� ���º�����
////����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
////�������󳬳���ͨ�����ĸ����������������Լ���״̬
////�������������Ϊ��������
//
//
//
//
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//
////1.����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
//void test01()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//
//
////2.�������󳬳���ͨ�����ĸ����������������Լ���״̬
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void  operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int  count; //�ڲ� �Լ���״̬
//};
//
//void test02()
//{
//	MyPrint myprint;
//	myprint("���۵�");
//	myprint("���۵�");
//	myprint("���۵�");
//	cout << "myprint���õĴ����ǣ�" << myprint.count << endl;
//
//}
//
////3.�������������Ϊ��������
//
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test03()
//{
//	MyPrint myprint;
//	doPrint(myprint, "hello");
//}
//
//int main()
//{
//	test03();
//	system("pause");
//	return 0;
//}
//

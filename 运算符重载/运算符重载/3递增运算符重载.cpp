//#include <iostream>
//using namespace std;
////�������������
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	//����ǰ��++�����
//	MyInteger& operator++()  //����������Ϊ��һֱ��һ�����ݼ����е�������
//	{
//		m_Num++;
//		return *this;
//	}
//	//���غ���++�����
//	//int�������ռλ������������������ǰ�úͺ��õ���
//	MyInteger operator++(int)  //����������Ϊ��һֱ��һ�����ݼ����е�������
//	{
//		
//		//�� ��¼��ʱ�Ľ��
//		MyInteger temp = *this;
//		//�����
//		m_Num++;
//		//��󽫼�¼�������
//		return temp;
//	}
//private:
//	int m_Num;
//};
////�������������
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
//	cout << (myint++)++ << endl;//��������
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
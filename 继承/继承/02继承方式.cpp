//#include <iostream>
//using namespace std;
////�̳з�ʽ
//
////�����̳�
//
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son1 :public Base1
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		m_B = 11;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  �����в��ܷ���
//
//	}
//};
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//����Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
//}
////�����̳�
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son2 :protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա �������б��   ����Ȩ��
//		m_B = 11;//�����еı���Ȩ�޳�Ա ����������Ȼ�� ����Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  �����в��ܷ���
//
//	}
//};
//void test02()
//{
//	Son2 s2;
//	//s2.m_A = 100;  //��Son2�� m_A��Ϊ����Ȩ�� ������ʲ���
//	//s2.m_B = 100;//����Son1�� m_B�Ǳ���Ȩ�� ������ʲ���
//}
//
////˽�м̳�
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//
//};
//
//class Son3 :protected Base3
//{
//public:
//	void func()
//	{
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա �������б��   ˽��Ȩ��
//		m_B = 11;//�����еı���Ȩ�޳�Ա �������б�Ϊ   ˽��Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա  �����в��ܷ���
//
//	}
//};
//void test03()
//{
//	Son3 s3;
//	//s3.m_A = 1000;  //��Son3�� m_A��Ϊ˽��Ȩ�� ������ʲ���
//	//s3.m_B = 1000;//����Son3�� m_B��˽��Ȩ�� ������ʲ���
//}
//
//class GrandSon3 : public Son3
//{
//public:
//	void func()
//	{
//		m_A = 1;  //����Son3�� m_A���˽�� ������˵������ʲ���
//	}
//};
//int main()
//{
//
//	system("pause");
//	return 0;
//}
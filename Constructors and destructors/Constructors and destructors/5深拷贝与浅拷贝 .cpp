////ǳ����:�򵥵ĸ�ֵ��������
////��� : �ڶ�����������ռ䣬���п�������
//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//		Person()
//		{
//			cout << "Person���޲ι��캯���ĵ���" << endl;
//		}
//		Person(int age, int height)
//		{
//			m_Age = age;
//			m_Height = new int(height);
//			cout << "Person���вι��캯���ĵ���" << endl;
//		}
//		//Person(const Person& p)
//		//{
//		//	//������������ϵ��������ԣ�������������
//		//	m_Age = p.m_Age;
//		//	cout << "Person�Ŀ������캯���ĵ���" << endl;
//		//}
//		//�Լ�ʵ�ֿ������캯�� ���ǳ��������������
//		Person(const Person& p)
//		{
//			cout << "Person�Ŀ������캯���ĵ���" << endl;
//			m_Age = p.m_Age;
//			//m_Height = p.m_Height; ������Ĭ��ʵ�־������д��� ǳ����
//			m_Height = new int(*p.m_Height);  //���
//
//		}
//		~Person()
//		{
//			//�������룬���������������ͷŲ���
//			if (m_Height != NULL)
//			{
//				delete m_Height;
//				m_Height = NULL;
//			}
//			cout << "~Person�����ĵ���" << endl;
//		}
//		int m_Age;
//		int* m_Height;
//};
//void test01()
//{
//	Person p1(18, 160);
//	cout << "p1�������ǣ�" << p1.m_Age << "���Ϊ��" << *p1.m_Height << endl;
//	Person p2(p1);
//	cout << "p2�������ǣ�" << p2.m_Age << "���Ϊ��" << *p2.m_Height << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////�ܽ�:����������ڶ������ٵģ�һ��Ҫ�Լ��ṩ�������캯������ֹǳ��������������
//#include <iostream>
//using namespace std;
//class Person
//{
//public:
//	Person(int age)
//	{
//		//m_Age = age;
//		//this ָ��ָ�� �����õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//	Person& PersonAddAge(Person &p)  //���÷���ԭ���Ķ�������������÷����µĶ��� 
//	{
//		this->age += p.age;
//		return *this;  ////thisָ��p2��ָ�룬��*thisָ��ľ���p2���������
//	}
//
//	//int m_Age;
//	int age;
//};
////1 ������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1�������ǣ�" << p1.age << endl;
//}
//
////2.���ض�������*this
//void test02()
//{
//	Person p1(18);
//	Person p2(15);
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2�������ǣ�" << p2.age << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
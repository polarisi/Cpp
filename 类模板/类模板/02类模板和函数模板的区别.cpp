////��ģ���뺯��ģ��������Ҫ������:
////1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//
//#include <iostream>
//using namespace std;
//template<class NameType, class AgeType = int >
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//	void showPerson()
//	{
//		cout << this->m_Name << " " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
//
//void test01()
//{
//	//Person<string, int> p1 = { "����", 15 };
//	//Person p1("����", 15);//�޷��Զ��Ƶ� 
//
//	Person<string, int> p1( "����", 15 ); //��ȷ ��ֻ������ʾָ������
//	p1.showPerson();
//
//}
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string>p1("��", 14);
//	p1.showPerson();
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
////count(iterator beg, iterator end, value);
////// ͳ��Ԫ�س��ִ���
////// beg ��ʼ������
////// end ����������
////// value ͳ�Ƶ�Ԫ��
//
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//#include<string>
//
////ͳ��������������
//void test01()
//{
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//
//	int num = count(v.begin(), v.end(), 2);
//
//	cout << "2�ĸ���Ϊ��" << num << endl;
//}
//
////ͳ���Զ�����������
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//
//	}
//	bool operator==(const Person& p)
//	{
//		if (this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
//void test02()
//{
//	vector<Person>v;
//		Person p1("aaa", 11);
//		Person p2("sss", 11);
//		Person p3("ddd", 13);
//		Person p4("fff", 14);
//		v.push_back(p1);
//		v.push_back(p2);
//		v.push_back(p3);
//		v.push_back(p4);
//
//		Person p("aaa", 11);
//
//
//		int num = count(v.begin(), v.end(), p);
//
//		cout << "��pͬ�����ĸ���Ϊ��" << num << endl;
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
//
////ͳ���Զ�����������ʱ����Ҫ������� operator==
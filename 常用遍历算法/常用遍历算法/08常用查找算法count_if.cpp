////count if (iterator beg, iterator end, Pred);
////// ������ͳ��Ԫ�س��ִ���
////// beg ��ʼ������
////// end ����������
////// _Pred ν��
//
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//
////ͳ��������������
//
//class Greater2
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 2;
//	}
//};
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//
//	int num = count_if(v.begin(), v.end(), Greater2());
//	cout << "����2��Ԫ��Ϊ" << num << endl;
//}
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//	string m_Name;
//	int m_Age;
//};
//
//class AgeGreater11
//{
//public:
//	bool operator()(const Person& p)
//	{
//		return p.m_Age > 11;
//	}
//};
////ͳ���Զ�����������
//void test02()
//{
//	vector<Person>v;
//
//	Person p1("aaa", 11);
//	Person p2("sss", 11);
//	Person p3("ddd", 13);
//	Person p4("fff", 14);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	
//	//Person p("aaa", 11);
//
//	int num = count_if(v.begin(), v.end(), AgeGreater11());
//
//	cout << "����11�ĸ���Ϊ��" << num << endl;
//
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
////count(iterator beg, iterator end, value);
////// 统计元素出现次数
////// beg 开始迭代器
////// end 结束迭代器
////// value 统计的元素
//
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//#include<string>
//
////统计内置数据类型
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
//	cout << "2的个数为：" << num << endl;
//}
//
////统计自定义数据类型
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
//		cout << "和p同岁数的个数为：" << num << endl;
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
////统计自定义数据类型时候，需要配合重载 operator==
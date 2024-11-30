////count if (iterator beg, iterator end, Pred);
////// 按条件统计元素出现次数
////// beg 开始迭代器
////// end 结束迭代器
////// _Pred 谓词
//
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//
////统计内置数据类型
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
//	cout << "大于2的元素为" << num << endl;
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
////统计自定义数据类型
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
//	cout << "大于11的个数为：" << num << endl;
//
//}
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
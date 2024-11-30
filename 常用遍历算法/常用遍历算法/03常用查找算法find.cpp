////find                  //查找元素
////find_if               //按条件查找元素
////adjacent_find		  //查找相邻重复元素
////binary search		  //二分查找法
////count                 //统计元素个数
////count_if              //按条件统计元素个数
//
//
////find(iterator beg, iterator end, value); 
////按值查找元素，找到返回指走位置选代器，找不到返回结束迭代器位置
////beg 开始迭代器
////end 结束迭代器
////value 查找的元素
//
//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
////find
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//
//	//查找容器中是否有 5 这个元素
//	vector<int>::iterator it =  find(v.begin(), v.end(), 5);//不管找到与否，都会返回一个迭代器
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//
//	}
//	else
//	{
//		cout << "找到了： " << *it << endl;
//
//	}
//}
//
//class  Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//重载==号 让底层find知道如何对比Person数据类型
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
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
////查找自定义数据类型
//void test02()
//{
//	vector<Person>v;
//	//创建数据
//	Person p1("aaa", 11);
//	Person p2("sss", 12);
//	Person p3("ddd", 13);
//	Person p4("fff", 14);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("fff", 14);
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);//不管找到与否，都会返回一个迭代器
//	if (it == v.end())
//	{
//		cout << "没有找到" << endl;
//
//	}
//	else
//	{
//		cout << "找到了： " << it->m_Name << " " << it->m_Age << endl;
//
//	}
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
////总结: 利用find可以在容器中找指定的元素，返回值是选代器
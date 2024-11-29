//#include <iostream>
//using namespace std;
//#include<map>
//class myCompare
//{
//public:
//	bool operator()(int v1, int v2) const
//	{
//		return v1 > v2;
//	}
//};
//void printMap(map<int, int, myCompare>& m)
//{
//	for (map<int, int, myCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " value:" << it->second << endl; //；两种都行
//
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建map容器
//	map<int, int, myCompare> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//
//	printMap(m);
//
//
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////利用仿函数可以指定map容器的排序规则
////对于自定义数据类型，map必须要指定排序规则, 同set容器
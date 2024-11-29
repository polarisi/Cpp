////find(key);//查找key是否存在,若存在，返回该键的元素的迭代器;若不存在，返回set.end();
////count(key）;//统计key的元素个数
//
//
//
//#include <iostream>
//using namespace std;
//#include<map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " value:" << it->second << endl; //；两种都行
//
//	}
//	cout << endl;
//}
//void test01()
//{
//	//创建map容器
//	map<int, int> m;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(2, 20));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(5, 50));
//
//	printMap(m);
//	
//	//查找  map不允许插入重复元素 结果是1 或 0
//	//multimap统计结果可能大于1
//	map<int, int>::iterator pos = m.find(2);
//
//
//
//	if (++m.begin() == pos)
//	{
//		cout << "找到了 " << pos->first << " " << pos->second << endl;
//
//	}
//	else
//	{
//		cout << "没找到" << m.size() << endl;
//	}
//
//	//统计
//	cout << m.count(5) << endl;
//
//
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
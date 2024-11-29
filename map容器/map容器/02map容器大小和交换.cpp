////size();   //返回容器中元素的数目
////empty();	//判断容器是否为空
////swap(st);	//交换两个集合容器
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
//		cout << "key:" << (*it).first <<" value:" << it->second << endl; //；两种都行
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
//
//	if (m.empty())
//	{
//		cout << "m为空" << endl;
//		
//	}
//	else
//	{
//		cout << "m不为空，大小是：" << m.size() << endl;
//	}
//
//	//cout << "------------------------" << endl;
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(11, 450));
//	m2.insert(pair<int, int>(10, 300));
//	m2.insert(pair<int, int>(31, 302));
//
//
//	printMap(m2);
//
//	m.swap(m2);
//
//	cout << "--------交换后-------------" << endl;
//
//	printMap(m);
//	printMap(m2);
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
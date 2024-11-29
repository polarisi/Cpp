////insert(elem);        //在容器中插入元素。
////clear();             //清除所有元素
////erase(pos);          //删除pos迭代器所指的元素，返回下一个元素的迭代器,
////erase(beg, end);     //删除区间[beg,end)的所有元素，返回下一个元素的迭代器,
////erase(key);          //删除容器中值为key的元素。
//
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
//	//插入
//	//第一种
//	m.insert(pair<int, int>(1, 10));
//	//第二种
//	m.insert(make_pair(0, 5));
//	//第三种
//	m.insert(map<int, int>::value_type(3, 30));
//	//第四种
//	m[4] = 50;
//	cout << m[4] << endl;
//	//不建议使用[]， 用途 可以利用key 访问到value
//	printMap(m);
//
//	
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(++m.begin(), --m.end());
//	printMap(m);
//	
//	m.erase(1);  //按照key值删除
//	printMap(m);
//
//	m.clear();
//	printMap(m);
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
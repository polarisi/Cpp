//#include <iostream>
//using namespace std;
//#include <vector>
//
//
//// at(int idx);            //返回索引idx所指的数据
////operator[];              //返回索引idx所指的数据
////front();                 //返回容器中第一个数据元素
////back();                  //返回容器中最后一个数据元素
//
//
////void printVector(vector<int>& v)
////{
////	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//遍历  利用[]的方式访问数组中的数据
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	//获取第一个元素
//	cout << "第一个元素： " << v1.front() << endl;
//
//	//获取最后个元素
//	cout << "最后一个元素： " << v1.back() << endl;
//	cout << "元素： " << v1.back()-1 << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
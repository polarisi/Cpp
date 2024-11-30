////replace if (iterator beg, iterator nd, pred, newvalue);
//// 按条件替换元素，满足条件的替换成指定元素
//// beg 开始迭代器
//// end 结束迭代器
//// _pred 谓词
//// newvalue 替换的新元素
//
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include<functional>
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//class Greater5
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//
//	for_each(v.begin(), v.end(), MyPrint()); //MyPrint是仿函数 重载()
//	cout << endl;
//
//	//替换
//
//	replace_if(v.begin(), v.end(), Greater5(), 3);
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), myPrint);//myPrint 是普通函数
//	cout << endl;
//
//
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
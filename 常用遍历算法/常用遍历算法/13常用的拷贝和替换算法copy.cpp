////copy               // 容器内指定范围的元素拷贝到另一容器中
////replace            // 将容器内指定范围的旧元素修改为新元素
////replace_if         // 容器内指定范围满足条件的元素替换为新元素
////swap               // 互换两个容器的元素
//
//
////copy(iterator beg, iterator end, iterator dest);
//// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//// beg 开始迭代器
//// end 结束迭代器
//// dest 目标起始迭代器
//
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
//void test01()
//{
//	vector<int>v;
//	vector<int>v2;
//
//
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//
//	}
//	v2.resize(v.size());//开辟空间
//	//合并
//	copy(v.begin(), v.end(), v2.begin());
//
//	for_each(v2.begin(), v2.end(), myPrint);
//	cout << endl;
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
////sort           //对容器内元素进行排序
////random_shuffle //洗牌 指定范围内的元素随机调整次序
////merge          // 容器元素合并，并存储到另一容器中
////reverse        // 反转指定范围的元素
//
////sort(iterator beg, iterator end, _Pred);
////// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
////// beg 开始迭代器
////// end 结束迭代器
//////_Pred 谓词
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
//	v.push_back(1);
//	v.push_back(4);
//	v.push_back(3);
//	v.push_back(2);
//	v.push_back(6);
//	v.push_back(5);
//
//	//利用sort进行升序
//	sort(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	//改变为降序
//	//sort(v.rbegin(), v.rend());
//	sort(v.begin(), v.end(), greater<int>());
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
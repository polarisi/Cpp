////bool binary_search(iterator beg, iterator end, value);
//// 查找指定的元素，查到 返回true 否则false
////               注意:                                在无序序列中不可用
//// beg 开始迭代器
//// end 结束迭代器
//// value 查找的元素
//
//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//	v.push_back(7);
//	v.push_back(8);
//	v.push_back(9);
//	//注意：容器必须是有序的序列   无序序列结果未知
//	bool ret = binary_search(v.begin(), v.end(), 9);
//	if (ret)
//	{
//		cout << "找到了！" << endl;
//	}
//	else
//	{
//		cout << "未找到！" << endl;
//
//	}
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include<functional>
//#include<ctime>
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//void test01()
//{
//	srand((unsigned int)time(NULL));
//
//	vector<int>v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	v.push_back(6);
//
//	////利用sort进行升序
//	//sort(v.begin(), v.end());
//
//	//利用洗牌算法打乱顺序
//	random_shuffle(v.begin(), v.end());
//
//	for_each(v.begin(), v.end(), myPrint);
//	cout << endl;
//
//	////改变为降序
//	////sort(v.rbegin(), v.rend());
//	//sort(v.begin(), v.end(), greater<int>());
//
//	//for_each(v.begin(), v.end(), myPrint);
//	//cout << endl;
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
////random_shuffle洗牌算法比较实用，使用时记得加随机数种子
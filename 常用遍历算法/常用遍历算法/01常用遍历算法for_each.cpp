//#include <iostream>
//using namespace std;
//#include<algorithm>
//#include<vector>
//
//void print01(int val)
//{
//	cout << val << " ";
//}
//
//class print02
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//	for_each(v.begin(), v.end(), print01); //普通的数不需要加括号，而创建仿函数是 因为重载了()所以要加()
//	cout << endl;
//	
//	for_each(v.begin(), v.end(), print02());//print02()匿名函数对象
//	cout << endl;
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////总结：for_each在实际开发中是最常用遍历算法，要熟练握
//#include <iostream>
//using namespace std;
//#include <vector>
////容量和大小
//
////empty();               //判断容器是否为空
////capacity();            //容器的容量
////size();                //返回容器中元素的个数
////resize(int num);       //重新指定容器的长度为num，若容器变长，则以默认值填充新位置//如果容器变短，则末尾超出容器长度的元素被删除。
////resize(int num, elem); //重新指定容器的长度为num，若容器变长，则以elem值填充新位置//如果容器变短，则未尾超出容器长度的元素被删除
//
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty()) //为真 代表容器为空
//	{
//		cout << "v1为空" << endl;
//
//	}
//	else
//	{
//		cout << "v1不为空" << endl;;
//		cout << "v1的容量是：" << v1.capacity() << endl;;
//		cout << "v1的大小是：" << v1.size() << endl;
//
//	}
//	//重新指定大小
//	v1.resize(15);
//	printVector(v1);  //如果重新指定的比原来长了，默认用0填充
//
//	v1.resize(20, 45); //可以指定特定的数字填充
//	printVector(v1);
//
//	v1.resize(15);      //如果重新指定的比原来短了，超出部分会删除
//	printVector(v1);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
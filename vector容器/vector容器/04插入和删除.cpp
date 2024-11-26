//#include <iostream>
//using namespace std;
//#include<vector>
////插入和删除
////push back(ele);                                   //尾部插入元素ele
////pop_back();                                       //删除最后一个元素
////insert(const iterator pos, ele);                  //迭代器指向位置pos插入元素ele
////insert(const_iterator pos，int count, ele);       //迭代器指向位置pos插入count个元素ele
////erase(const iterator pos);                        //删除迭代器指向的元素
////erase(const_iterator start, const iterator end);  //删除选代器从start到end之间的元素
////clear();                                          //删除容器中所有元素
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
//
//	//遍历
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入
//	v1.insert(v1.begin()+1, 100);
//	printVector(v1);
//
//	//插入多个
//	v1.insert(v1.begin() + 1, 2, 3);
//	printVector(v1);
//
//	//删除
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//删除从开始位置到结束位置的数据
//	v1.erase(v1.begin()+v1.size()/2, v1.end() - 2);
//	printVector(v1);
//	
//	//清空
//	v1.clear();
//	printVector(v1);
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
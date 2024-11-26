//#include <iostream>
//using namespace std;
//#include <deque>
//
////两端插入操作:
////push_back(elem);                       //在容器尾部添加一个数据
////push_front(elem);                        //在容器头部插入一个数据
////pop_back();                            //删除容器最后一个数据
////pop_front();                          //删除容器第一个数据
////
////指定位置操作:
////insert(pos, elem);              //在poS位置插入一个elem元素的拷贝，返回新数据的位置。
////insert(pos, n, elem);           //在pOS位置插入n个elem数据，无返回值。
////insert(pos, beg, end);          //在pos位置插入[beg,end)区间的数据，，无返回值，
////clear();                        //清空容器的所有数据
////erase(beg, end);                //删除[beg,end)区间的数据，返回下一个数据的位置,
////erase(pos);                     //删除pos位置的数据，返回下一个数据的位置。
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100; //容器中的数据不可修改
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//
//	printDeque(d1);
//
//	d1.push_front(200);
//	d1.push_front(100);
//	printDeque(d1);
//
//	d1.pop_back();
//	d1.pop_front();
//	printDeque(d1);
//
//
//	d1.insert(d1.begin() + 1, 25);
//	printDeque(d1);
//
//	d1.insert(d1.begin() + 1, 3, 21);
//	printDeque(d1);
//
//
//	deque<int>d2;
//	d2.push_back(78);
//	d2.push_back(77);
//	d2.push_back(76);
//	d2.push_back(75);
//	printDeque(d2);
//
//
//	d1.insert(d1.begin() + 1, d2.begin(), d2.end());
//	printDeque(d1);
//
//	d2.clear();
//	printDeque(d2);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;  //it是指针，指向的是地址
//	d1.erase(it);
//	printDeque(d1);
//
//	d1.erase(d1.begin()+1, d1.end() - 5);
//	printDeque(d1);
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
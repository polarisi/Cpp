#include <iostream>
using namespace std;
#include<deque>
#include<algorithm> //标准算法 的头文件
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; //容器中的数据不可修改
		cout << *it << " ";
	}
	cout << endl;

}

void test01()
{
	deque<int>d;
	d.push_back(1);
	d.push_back(5);
	d.push_back(3);
	d.push_back(4);
	d.push_front(8);
	d.push_front(9);
	d.push_front(7);

	printDeque(d);
	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
	//vector也可以用sort排序
	sort(d.begin(), d.end());  //默认是升序

	//sort(d.rbegin(), d.rend());  //降序
	//sort(d.end(), d.begin());  //默认是升序  错误

	printDeque(d);


}
int main()
{
	test01();
	system("pause");
	return 0;
}
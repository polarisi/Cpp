#include <iostream>
using namespace std;
#include<deque>
#include<algorithm> //��׼�㷨 ��ͷ�ļ�
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100; //�����е����ݲ����޸�
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
	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
	//vectorҲ������sort����
	sort(d.begin(), d.end());  //Ĭ��������

	//sort(d.rbegin(), d.rend());  //����
	//sort(d.end(), d.begin());  //Ĭ��������  ����

	printDeque(d);


}
int main()
{
	test01();
	system("pause");
	return 0;
}
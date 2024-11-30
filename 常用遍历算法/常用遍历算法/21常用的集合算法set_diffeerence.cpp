//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest),
// ���������ϵĲ
// ע��:�������ϱ�������������
// beg1 ����1��ʼ������
// end1 ����1����������
// beg2 ����2��ʼ������
// end2 ����2����������
// dest Ŀ��������ʼ������
//v1:1 2 3 4 5
//v2:3 4 5 6 7
//v1��v2���1 2
//v2��v1���6 7
#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>

void MyPrint(int val)
{
	cout << val << " ";
}
void test01()
{
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;

	//Ŀ��������Ҫ���ٿռ�
	//��������� ����������С���� ���ٿռ� ȡС�����Ŀռ��С


	for (int i = 0; i <= 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);

	}
	//v3.resize(v1.size() < v2.size() ? v1.size():v2.size());
	v3.resize(max(v1.size(), v2.size()));
	//��ȡ�
	vector<int>::iterator itEnd1 = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

	for_each(v3.begin(), itEnd1, MyPrint);
	cout << endl;
	v4.resize(v2.size());  //ȡ˭�Ĳ��ȡ˭�Ĵ�С
	//��ȡ�
	vector<int>::iterator itEnd2 = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), v4.begin());

	for_each(v4.begin(), itEnd2, MyPrint);
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}
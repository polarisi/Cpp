#include <iostream>
using namespace std;
#include<vector>

//reserve(int len);//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

void test01()
{
	vector<int>v;
	
	//Ԥ���ռ�
	v.reserve(100000);
	int num = 0;//ͳ�ƿ��ٴ���

	int* p = NULL;

	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num�Ĵ�С�ǣ�" << num << endl;;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
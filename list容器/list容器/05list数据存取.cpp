//#include <iostream>
//using namespace std;
//#include<list>
//
////front();          //���ص�һ��Ԫ�ء�
////back();           //�������һ��Ԫ�ء�
//
//
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//
//	cout << endl;
//}
//
////��ֵ
//void test01()
//{
//	list<int>L1;
//	L1.push_back(1);
//	L1.push_back(2);
//	L1.push_back(3);
//	L1.push_back(4);
//	L1.push_back(5);
//
//	printList(L1);
//	//L1[0] ��������[]�ķ�ʽ����list�����е�Ԫ��
//	//L1.at(0)Ҳ������
//	//ԭ�� list�������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧���������
//
//	//�����õ�����++�ķ�ʽ����
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "�ڶ���Ԫ��Ϊ��" << ++L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	//��֤��������֧���������
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��
//	it--;
////	it = it + 1;//��֧���������
//
//	
//	//list<int>L2;
//	//L2 = L1;
//	//printList(L2);
//
//	//list<int>L3;
//	//L3.assign(L2.begin(), L2.end());
//	//printList(L3);
//
//	//list<int>L4;
//	//L4.assign(10, 11);
//	//printList(L4);
//
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
////push_back(elem);//������β������һ��Ԫ��
////pop_back();//ɾ�����������һ��Ԫ��
////push_front(elem);//��������ͷ����һ��Ԫ��
////pop_front();//��������ͷ�Ƴ���һ��Ԫ��
////insert(pos,elem);//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
////insert(pos,n,elem);//��pOsλ�ò���n��elem���ݣ��޷���ֵ��
////insert(pos,beg,end);//��p0sλ�ò���[beg,end)��������ݣ��޷���ֵ��
////clear();//�Ƴ���������������
////erase(beg, end);//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
////erase(pos);//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
////remove(elem);//ɾ��������������elemֵƥ���Ԫ�ء�
//
//
//#include <iostream>
//using namespace std;
//#include<list>
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
////����
//void test01()
//{
//	list<int>L1;
//	L1.push_back(1);
//	L1.push_back(2);
//	L1.push_back(3);
//	L1.push_back(4);
//	L1.push_back(5);
//	L1.push_front(100);
//	L1.push_front(200);
//	L1.push_front(300);
//
//
//	printList(L1);
//	L1.pop_back();
//	L1.pop_front();
//	printList(L1);
//
//	//����
//
//	L1.insert(L1.begin(), 9);
//	printList(L1);
//
//	list<int>::iterator it = L1.begin();
//	//it++;
//	L1.insert(++it, 3, 56);
//	//L1.insert(++L1.begin(), 3, 56);
//	printList(L1);
//
//
//	//ɾ��
//	it = L1.begin();
//	L1.erase(++it);
//
//	printList(L1);
//
//	//�Ƴ�
//	L1.push_back(10000);
//	L1.push_back(10000);
//	L1.push_back(10000);
//
//	printList(L1);
//	L1.remove(10000);
//	printList(L1);
//
//	L1.clear();
//	printList(L1);
//
//
//
//
//
//}
//
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
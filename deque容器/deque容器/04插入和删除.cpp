//#include <iostream>
//using namespace std;
//#include <deque>
//
////���˲������:
////push_back(elem);                       //������β�����һ������
////push_front(elem);                        //������ͷ������һ������
////pop_back();                            //ɾ���������һ������
////pop_front();                          //ɾ��������һ������
////
////ָ��λ�ò���:
////insert(pos, elem);              //��poSλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
////insert(pos, n, elem);           //��pOSλ�ò���n��elem���ݣ��޷���ֵ��
////insert(pos, beg, end);          //��posλ�ò���[beg,end)��������ݣ����޷���ֵ��
////clear();                        //�����������������
////erase(beg, end);                //ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ��,
////erase(pos);                     //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100; //�����е����ݲ����޸�
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
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;  //it��ָ�룬ָ����ǵ�ַ
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
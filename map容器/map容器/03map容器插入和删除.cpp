////insert(elem);        //�������в���Ԫ�ء�
////clear();             //�������Ԫ��
////erase(pos);          //ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����,
////erase(beg, end);     //ɾ������[beg,end)������Ԫ�أ�������һ��Ԫ�صĵ�����,
////erase(key);          //ɾ��������ֵΪkey��Ԫ�ء�
//
//
//
//
//#include <iostream>
//using namespace std;
//#include<map>
//
//void printMap(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key:" << (*it).first << " value:" << it->second << endl; //�����ֶ���
//
//	}
//	cout << endl;
//}
//void test01()
//{
//	//����map����
//	map<int, int> m;
//	//����
//	//��һ��
//	m.insert(pair<int, int>(1, 10));
//	//�ڶ���
//	m.insert(make_pair(0, 5));
//	//������
//	m.insert(map<int, int>::value_type(3, 30));
//	//������
//	m[4] = 50;
//	cout << m[4] << endl;
//	//������ʹ��[]�� ��; ��������key ���ʵ�value
//	printMap(m);
//
//	
//	//ɾ��
//	m.erase(m.begin());
//	printMap(m);
//
//	m.erase(++m.begin(), --m.end());
//	printMap(m);
//	
//	m.erase(1);  //����keyֵɾ��
//	printMap(m);
//
//	m.clear();
//	printMap(m);
//
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
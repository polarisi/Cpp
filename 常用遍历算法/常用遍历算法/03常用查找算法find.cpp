////find                  //����Ԫ��
////find_if               //����������Ԫ��
////adjacent_find		  //���������ظ�Ԫ��
////binary search		  //���ֲ��ҷ�
////count                 //ͳ��Ԫ�ظ���
////count_if              //������ͳ��Ԫ�ظ���
//
//
////find(iterator beg, iterator end, value); 
////��ֵ����Ԫ�أ��ҵ�����ָ��λ��ѡ�������Ҳ������ؽ���������λ��
////beg ��ʼ������
////end ����������
////value ���ҵ�Ԫ��
//
//#include <iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<string>
////find
//
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//
//	}
//
//	//�����������Ƿ��� 5 ���Ԫ��
//	vector<int>::iterator it =  find(v.begin(), v.end(), 5);//�����ҵ���񣬶��᷵��һ��������
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << *it << endl;
//
//	}
//}
//
//class  Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//����==�� �õײ�find֪����ζԱ�Person��������
//	bool operator==(const Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	string m_Name;
//	int m_Age;
//};
////�����Զ�����������
//void test02()
//{
//	vector<Person>v;
//	//��������
//	Person p1("aaa", 11);
//	Person p2("sss", 12);
//	Person p3("ddd", 13);
//	Person p4("fff", 14);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	Person pp("fff", 14);
//	vector<Person>::iterator it = find(v.begin(), v.end(), pp);//�����ҵ���񣬶��᷵��һ��������
//	if (it == v.end())
//	{
//		cout << "û���ҵ�" << endl;
//
//	}
//	else
//	{
//		cout << "�ҵ��ˣ� " << it->m_Name << " " << it->m_Age << endl;
//
//	}
//
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
////�ܽ�: ����find��������������ָ����Ԫ�أ�����ֵ��ѡ����
//��������:ʵ��һ��ͨ�õ������࣬Ҫ������!
//���Զ��������������Լ��Զ����������͵����ݽ��д洢
//�������е����ݴ洢������
//���캯���п��Դ������������
//�ṩ��Ӧ�Ŀ������캯���Լ�operator = ��ֹǳ�������⡣
// �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ����
//����ͨ���±�ķ�ʽ���������е�Ԫ��
//���Ի�ȡ�����е�ǰԪ�ظ��������������

#include <iostream>
using namespace std;
#include "09MyArray.hpp"
#include <string>
void printIntArray(MyArray<int>&  arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}
void test01()
{
	MyArray<int>arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//����β�巨�������в�������

		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;

	printIntArray(arr1);

	cout << "arr1�������ǣ�" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�С�ǣ�" << arr1.getSize() << endl;

	//arr1[0];
	MyArray<int>arr2(arr1);
	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;

	cout << "arr2�������ǣ�" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�С�ǣ�" << arr2.getSize() << endl;


	//MyArray<int>arr3(100);
	//arr3 = arr1;


}

//�����Զ������������
class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};
void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "������" << arr[i].m_Name << " " << "���䣺" << arr[i].m_Age << endl;

	}
}


void test02()
{
	MyArray<Person> arr(10);
	Person p1("�����", 999);
	Person p2("����", 30);
	Person p3("槼�", 18);
	Person p4("������", 20);
	Person p5("����", 25);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);


	//��������ʹ�С
	cout << "arr�������ǣ�" << arr.getCapacity() << endl;
	cout << "arr�Ĵ�С�ǣ�" << arr.getSize() << endl;
}
int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
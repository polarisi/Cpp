//#include <iostream>
//using namespace std;
////��̬
//
////������
//class Animal
//{
//public:
//	virtual  void speak()
//	{
//		cout << "������˵��" << endl;
//
//	}
//};
//
////è��
//class Cat : public Animal
//{
//public:
//	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
//	virtual void speak() //virtual��д�ɲ�д
//	{
//		cout << "Сè��˵�� " << endl;
//
//	}
//};
////����
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵�� " << endl;
//
//	}
//};
////ִ��˵���ĺ���
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô��������Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////���м̳й�ϵ
////����Ҫ��д�����е��麯��
//
////��̬��̬ʹ��
////�����ָ��������� ִ���������
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//
//}
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal : " << sizeof(Animal) << endl;
//	;
//}
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}
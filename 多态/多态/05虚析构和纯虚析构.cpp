//#include <iostream>
//using namespace std;
//#include <string>
////�������ʹ�������
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal���캯���ĵ���" << endl;
//	}
//	//�������������Խ������ָ���ͷŶ���ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal���������ĵ���" << endl;
//	//}
//
//	//�������� ��Ҫ������Ҳ��Ҫʵ��
//	//���˴�������֮�� �����Ҳ���ڳ����� �޷�ʵ��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void speak() = 0;
//
//};
//Animal::~Animal()
//{
//	cout << "Animal�����������ĵ���" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯���ĵ���" << endl;
//		m_Name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat���������ĵ���" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	string* m_Name;
//};
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//�����ָ����������ʱ�򲻻���������е�����������������������ж������ԣ������ڴ�й©
//	delete animal;
//}
//	
//	int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////1.�������������������������ͨ������ָ���ͷ��������
////2.���������û�ж������ݣ����Բ�дΪ��������������
////3.ӵ�д���������������Ҳ���ڳ�����
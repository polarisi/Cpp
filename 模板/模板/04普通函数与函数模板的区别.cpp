//#include <iostream>
//using namespace std;
////��ͨ�����뺯��ģ������
////1����ͨ�������ÿ��Է�����ʽ����ת��
////2������ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
////3������ģ�� ����ʾָ�����ͣ����Է�����ʽ����ת��
//
////��ͨ����
//int myAdd(int a, int b)
//{
//	return a + b;
//
//}
//
////����ģ��
//template<class T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c'; //'a'  97 c '99'
//	cout << myAdd(a, b) << endl;
//	cout << myAdd(a, c) << endl;
//	
//	//�Զ������Ƶ�
//	cout << myAdd02(a, b) << endl;
//	//cout << myAdd02(a, c) << endl;  //���ܷ�����ʽ����ת��
//	//��ʾָ������
//	cout << myAdd02<int>(a, b) << endl;
//	cout << myAdd02<int>(a, c) << endl;  //���Է�����ʽ����ת��
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////�ܽ�:����ʹ����ʾָ�����͵ķ�ʽ�����ú���ģ�壬��Ϊ�����Լ�ȷ��ͨ������T
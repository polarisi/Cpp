////���ļ���������:
////1.����ͷ�ļ�
////#include <fstream>
////2.����������
////ifstream ifs;
////3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//// ifs.open("�ļ�·��", �򿪷�ʽ);
////4. ������
////���ַ�ʽ��ȡ
////5.�ر��ļ�
////ifs.close();
//
//
//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//void test01()
//{
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ����ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//4. ������
//	////��һ�ַ���
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//
//	//}
//
//	////�ڶ��ַ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//		cout << buf << endl;
//
//	//}
//
//	//�����ַ���
//	string buf;
//	while(getline(ifs, buf))
//	{
//			cout << buf << endl;
//
//	}
//
//	//�����ַ���  //һ��һ�����ַ�
//	//char c;
//	//while ((c = ifs.get()) != EOF)   //end of file
//	//{
//	//	cout << c ;
//
//	//}
//	//5.�ر��ļ�
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
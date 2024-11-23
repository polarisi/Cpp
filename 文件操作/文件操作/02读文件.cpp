////读文件步骤如下:
////1.包含头文件
////#include <fstream>
////2.创建流对象
////ifstream ifs;
////3.打开文件并判断文件是否打开成功
//// ifs.open("文件路径", 打开方式);
////4. 读数据
////四种方式读取
////5.关闭文件
////ifs.close();
//
//
//#include <iostream>
//using namespace std;
//#include <fstream>
//#include <string>
//void test01()
//{
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.打开文件并判断文件是否打开成功
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4. 读数据
//	////第一种方法
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//
//	//}
//
//	////第二种方法
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//		cout << buf << endl;
//
//	//}
//
//	//第三种方法
//	string buf;
//	while(getline(ifs, buf))
//	{
//			cout << buf << endl;
//
//	}
//
//	//第四种方法  //一个一个读字符
//	//char c;
//	//while ((c = ifs.get()) != EOF)   //end of file
//	//{
//	//	cout << c ;
//
//	//}
//	//5.关闭文件
//	ifs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
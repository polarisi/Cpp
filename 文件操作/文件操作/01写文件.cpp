////写文件步骤如下
////#include <fstream>
////2.创建流对象
////ofstream ofs;
////3. 打开文件
////ofs.open("文件路径", 打开方式)
////4. 写数据
////ofs << "写从的数据”;
////5.关闭文件
////ofs.close();
//
////打开方式                     解释
////ios::in              为读文件而打开文件
////ios::out             为写文件而打开文件
////ios : .ate           初始位置 : 文件尾
////ios::app               追加方式写文件
////ios::trunc         如果文件存在先删除，再创建
////ios::binary             二进制方式
//
//
////注意: 文件打开方式可以配合使用，利用 | 操作符
////例如 : 用二进制方式写文件、ios::binary | ios::out
//
//
//
//
//
//#include <iostream>
//using namespace std;
//#include <fstream>
//
//
//void test01()
//{
//	//1.包含头文件
//
//	//2.创建流对象
//	ofstream ofs;
//
//	//3. 打开文件
//	ofs.open("test.txt", ios::out);
//
//	//4. 写数据
//	ofs << "姓名：张山" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：18" << endl;
//
//	//5.关闭文件
//	ofs.close();
//
//
//
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
////总结:
////文件操作必须包含头文件 fstream
////读文件可以利用 ofstream ，或者fstream类
////打开文件时候需要指定操作文件的路径，以及打开方式。利用 << 可以向文件中写数据
////操作完毕，要关闭文
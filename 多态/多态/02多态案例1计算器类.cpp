//#include <iostream>
//using namespace std;
//#include <string>
////分别利用普通写法和多态技术实现计算器
//
////普通写法
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//			return m_Num1 + m_Num2;
//		else if(oper == "-")
//			return m_Num1 - m_Num2;
//		else if(oper == "*")
//			return m_Num1 * m_Num2;
//		//如果想要扩展新的功能，需要修改源码
//		//在真实的开发中 提倡开闭原则
//		//开闭原则：对扩展进行开放 对修改进行关闭
//	}
//
//	int m_Num1;
//	int m_Num2;
//
//};
//
//void test01()
//{
//	//创建计算器对象
//	Calculator c;
//	c.m_Num1 = 1;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//
//}
//
////利用多态实现计算器
//// 多态好处：
//// 1.组织结构清晰
//// 2.可读性强
//// 3.对于前期和后期扩展以及维护性高
////实现计算器抽象类
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
// 
//};
////加法计算器
//class AddCalculator :public AbstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	//用完后记得销毁
//	delete abc;
//	//减法运算
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//乘法运算
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//}
//
////引用指向子类对象
//int suan(AbstractCalculator & ac)
//{
//	return ac.getResult();
//}
//
//void test03()
//{
//	AddCalculator a;
//	a.m_Num1 = 1;
//	a.m_Num2 = 2;
//	//suan(a);
//	//cout << a.m_Num1 << "+" << a.m_Num2 << " = " << a.getResult() << endl;
//	cout << a.m_Num1 << "+" << a.m_Num2 << " = " << suan(a) << endl;
//
//
//	SubCalculator b;
//	b.m_Num1 = 2;
//	b.m_Num2 = 1;
//	//cout << b.m_Num1 << "-" << b.m_Num2 << " = " << b.getResult() << endl;
//	cout << b.m_Num1 << "+" << b.m_Num2 << " = " << suan(b) << endl;
//
//	MulCalculator c;
//	c.m_Num1 = 2;
//	c.m_Num2 = 2;
//	//cout << c.m_Num1 << "*" << c.m_Num2 << " = " << c.getResult() << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << " = " << suan(c) << endl;
//
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//
//	system("pause");
//	return 0;
//}
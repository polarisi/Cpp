//#include <iostream>
//using namespace std;
//#include <string>
////�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����
//
////��ͨд��
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
//		//�����Ҫ��չ�µĹ��ܣ���Ҫ�޸�Դ��
//		//����ʵ�Ŀ����� �ᳫ����ԭ��
//		//����ԭ�򣺶���չ���п��� ���޸Ľ��йر�
//	}
//
//	int m_Num1;
//	int m_Num2;
//
//};
//
//void test01()
//{
//	//��������������
//	Calculator c;
//	c.m_Num1 = 1;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
//	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
//
//}
//
////���ö�̬ʵ�ּ�����
//// ��̬�ô���
//// 1.��֯�ṹ����
//// 2.�ɶ���ǿ
//// 3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
////ʵ�ּ�����������
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
////�ӷ�������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	 int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////�˷�������
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
//	//��̬ʹ������
//	//����ָ���������ָ���������
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	//�����ǵ�����
//	delete abc;
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//	//�˷�����
//	abc = new MulCalculator;
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 20;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;
//
//}
//
////����ָ���������
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
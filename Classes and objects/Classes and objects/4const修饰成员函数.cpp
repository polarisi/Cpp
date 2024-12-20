#include <iostream>
using namespace std;
//常函数
class Person
{
public:
	//this指针的本质 是指针常量 指针的指向是不可以修改的
	//相当于 Person * const this
	//如若指针指向的值也不可以修改 那么 const Person * const this 相当于下面的
	//在成员函数后面加const 修饰的是this指针指向，让this指针指向的值也不可以修改
	void showPerson() const //常函数
	{
		//this->m_A = 100;
		//this = NULL;  //this指针不可以修改指针的指向
		this->m_B = 100;

	}
	void func()
	{

	}

	int m_A;
	mutable int m_B; //特殊变量，即使在常函数中，也可以修改这个值，也可以修改这个值，加关键字mutable

};

void test01()
{
	Person p;
	p.showPerson();
}

void  test02()
{
	const Person p; //在对象前加const 变为常对象
	//p.m_A = 100;
	p.m_B = 1;//m_B是一个特殊值，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();//常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性

}
int main()
{

	system("pause");
	return 0;
}
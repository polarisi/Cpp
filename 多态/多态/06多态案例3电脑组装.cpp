#include <iostream>
using namespace std;
//抽象出来不同的零件类
//抽象的cpu类
class CPU
{
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};

//抽象的显卡类
class VideoCard
{
public:
	//抽象的计算函数
	virtual void display() = 0;
};
//抽象的内存条类
class Memory
{
public:
	//抽象的计算函数
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//提供工作的函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}
	//提供一个析构函数 释放三个电脑零件
	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}
		if (m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}

private:
	CPU* m_cpu;       //CPU指针
	VideoCard* m_vc;  //显卡指针
	Memory* m_mem;    //内存条指针
};

//具体厂商
//Intel 厂商
class IntelCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Intel的CPU开始计算了" << endl;

	}
};
class IntelVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Intel的显卡开始显示了" << endl;

	}
};
class IntelMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;

	}
};

//lenovo厂商
class LenovoCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "Lenovo的CPU开始计算了" << endl;

	}
};
class LenovoVideoCard : public VideoCard
{
public:
	virtual void display()
	{
		cout << "Lenovo的显卡开始显示了" << endl;

	}
};
class LenovoMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Lenovo的内存条开始存储了" << endl;

	}
};

void test01()
{
	cout << "第一台电脑开始工作" << endl;

	//第一台电脑的零件
	CPU* intelCpu = new IntelCPU;
	VideoCard* intelCard = new IntelVideoCard;
	Memory* intelMem = new IntelMemory;

	//创建第一台电脑
	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
	computer1->work();
	delete computer1;
	cout << "-------------------------------" << endl;
	cout << "第二台电脑开始工作" << endl;

	//第二台电脑的组装
	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);
	computer2->work();
	delete computer2;


	cout << "-------------------------------" << endl;
	cout << "第三台电脑开始工作" << endl;

	//第三台电脑的组装
	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new IntelMemory);
	computer3->work();
	delete computer3;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
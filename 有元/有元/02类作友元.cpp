//#include <iostream>
//using namespace std;
////������Ԫ
//
//class Building
//{
//	//GoodGay���Ǳ���ĺ����ѣ����Է��ʱ�����˽�г�Ա
//	friend class GoodGay;
//public:
//	Building();
//	string m_SittingRoom; //����
//
//private:
//	string m_BedRoom; //����
//};
//
//class GoodGay
//{
//
//public:
//	GoodGay();
//	void visit();//�ιۺ���������Building �е�����
//
//	Building* building;
//};
//
////����д��Ա����
//Building::Building()
//{
//	m_SittingRoom = "����";
//	m_BedRoom = "����";
//}
//GoodGay::GoodGay()
//{
//	//�������������
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "�û��������ڷ��ʣ�" << building->m_SittingRoom << endl;
//	cout << "�û��������ڷ��ʣ�" << building->m_BedRoom << endl;
//
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
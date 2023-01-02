#include <iostream>

using namespace std;

//class Person
//{
//	private:
//		int age;
//		int height;
//		double money;
//		string books[100];
//
//	public:
//		string name;
//
//		void say()
//		{
//			cout << "hello" << name << endl;
//		}
//
//		int get_age()
//		{
//			return age;
//		}
//
//		void add_money(double x)
//		{
//			money += x;
//		}
//};
//
//int main()
//{
//	Person c;
//
//	c.name = "anduin"; // ��ȷ
//	// c.age = 19; // ����age Ϊ private ˽�����б���
//	c.get_age(); // ��ȷ
//	c.add_money(100);
//
//	c.say();
//
//	cout << c.get_age() << endl;
//
//	return 0;
//}

// class �� struct ������
// class ��д public ��Ĭ��Ϊ private
// struct ��Ĭ��Ϊ public

//struct Person
//{
//	public:
//		int age;
//		int height;
//		double money;
//		string books[100];
//
//	public:
//		string name;
//
//		void say()
//		{
//			cout << "hello" << name << endl;
//		}
//
//		int get_age()
//		{
//			return age;
//		}
//
//		void add_money(double x)
//		{
//			money += x;
//		}
//
//		// ���캯�� - ���ֺ��� / �ṹ��������ͬ
//		// û������
//		// ���Թ�����
//
//		Person(int _age, int _height, double _money)
//		{
//			age = _age;
//			height = _height;
//			money = _money;
//		}
//
//		// ����д������
//		Person(int _age, int _heght) : age(_age), height(_heght)
//		{
//
//		}
//};
//
//int main()
//{
//	Person(19, 180, 100.10);
//	Person(17, 15);
// 
//	return 0;
//}

// y ������

#include <iostream>

struct Node
{
	int val;
	Node* next;

	// ��������
	Node(int _val) : val(_val), next(NULL) {}
};

int main()
{
	Node* p = new Node(1);

	auto q = new Node(2);
	auto o = new Node(3);
	
	p->next = q;
	q->next = o;
	Node* head = p;

	// ͷ��
	Node* n = new Node(4);
	n->next = head;
	head = n;

	// ɾ��
	// y ��˵��ɾ�����Ǳ���������������
	// ��û�б�ɾ����ν
	Node* del = head->next;
	head->next = head->next->next;
	delete del;

	// ��������
	for (Node* i = head; i != nullptr; i = i->next)
	{
		cout << i->val << " ";
	}
	return 0;
}
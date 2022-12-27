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
//	c.name = "anduin"; // 正确
//	// c.age = 19; // 错误，age 为 private 私有类中变量
//	c.get_age(); // 正确
//	c.add_money(100);
//
//	c.say();
//
//	cout << c.get_age() << endl;
//
//	return 0;
//}

// class 和 struct 的区别
// class 不写 public 会默认为 private
// struct 则默认为 public

struct Person
{
	public:
		int age;
		int height;
		double money;
		string books[100];

	public:
		string name;

		void say()
		{
			cout << "hello" << name << endl;
		}

		int get_age()
		{
			return age;
		}

		void add_money(double x)
		{
			money += x;
		}

		// 构造函数 - 名字和类 / 结构体名字相同
		// 没有类型
		// 可以构造多个

		Person(int _age, int _height, double _money)
		{
			age = _age;
			height = _height;
			money = _money;
		}

		// 这种写法更快
		Person(int _age, int _heght) : age(_age), height(_heght)
		{

		}
};

int main()
{
	Person(19, 180, 100.10);
	Person(17, 15);
 
	return 0;
}
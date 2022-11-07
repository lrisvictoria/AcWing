#define _CRT_SECURE_NO_WARNINGS 1 

// 最简单的c++ 程序

// 头文件 第一部分
//#include <iostream>

// 第二部分
// 使用了 std 的命名空间
// 解决命名冲突产生的语法
// 我们使用的绝大多数的库函数
// 都是在 std 命名空间中
// 常用

//using namespace std;
//
//// 第三部分
//int main()
//{
//	cout << "Hello World" << endl;
//
//	return 0;
//}

// cin >> 读入
// cout << 读出

// 变量的定义
// 类型
// bool false、true 1byte
// char 'a','c'
// int -2147483648 ~2147483648
// float 1.23,2.5,
// 1.235e2 科学计数法 1.235 * 10 ^ 2
// 有效数字尾数，6~7位
// double 15~16位有效数字
// long long 更长的整形 -2^63 ~ 2^63 - 1
// long double 18~19位有效数字 12/16 byte

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b = 2, c = b;
//	float d = 1.5, e = 1, f = 1.23e2;
//	bool g = true, h = false;
//	char j = 'a', j = 'b';
//
//	long long l = 100000000000000000; // 这样是整数
//	long long s = 100000000000000000ll; // 这样表示长整形
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b;
//	
//	cin >> a >> b; // 将数据从 cin 流入 a 和 b 中
//	cout << a + b << endl; // 将 a + b 的值流入 cout 中
//	// endl 为换行
//
//	return 0;
//}

// 输出多个变量

#include <iostream>

using namespace std;

//int main()
//{
//	int a, b;
//	cin >> a;
//	cin >> b;
//
//	// 可以单独输出，也可以一行输出
//
//	cout << a + b;
//	cout << ' ' << a * b << endl;
//}


#include <cstdio>
// 包含 scanf 和 printf

// 输入和输出的时候 cin 和 cout 速度比 scanf 和 printf 慢
// 在输入和输出数据多的时候，用 scanf 和 printf 比较好
// 而且会写的很长

// cin 在读入字符的时候是不会把空格读入的

#include <cmath> // 数学库

// bool 被当做整数处理

//int main()
//{
//	cout << -5 % 2 << endl; // 正负取决于前面的数
//
//	return 0;
//}

//int main()
//{
//	float a = 5.2;
//	int b = (int)a;
//	printf("%d\n", b);
//
//	return 0;
//}

int main()
{
	//char c = 'A';

	cout << (char)('A' + 32) << endl;

	return 0;
}
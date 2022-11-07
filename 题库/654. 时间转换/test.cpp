#define _CRT_SECURE_NO_WARNINGS 1 

/*
读取一个整数值，它是工厂中某个事件的持续时间（以秒为单位），请你将其转换为小时：分钟：秒来表示。

输入格式
输入一个整数 N。

输出格式
输出转换后的时间表示，格式为 hours:minutes:seconds。

数据范围
1≤N≤1000000
输入样例：
556
输出样例：
0:9:16
*/

#include <iostream>

using namespace std;

int main()
{
    int second;
    cin >> second;

    cout << second / 3600 << ":" << (second % 3600) / 60 << ":" << second % 60 << endl;

    return 0;
}
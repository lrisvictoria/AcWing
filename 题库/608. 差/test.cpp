﻿#define _CRT_SECURE_NO_WARNINGS 1 

/*
* 读取四个整数 A,B,C,D，并计算 (A×B−C×D) 的值。

输入格式
输入共四行，第一行包含整数 A，第二行包含整数 B，第三行包含整数 C，第四行包含整数 D。

输出格式
输出格式为 DIFERENCA = X，其中 X 为 (A×B−C×D) 的结果。

数据范围
−10000≤A,B,C,D≤10000
输入样例：
5
6
7
8
输出样例：
DIFERENCA = -26
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    int DIFERENCA;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = " << a * b - c * d << endl;

    return 0;
}
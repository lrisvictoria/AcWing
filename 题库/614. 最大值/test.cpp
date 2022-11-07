﻿#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定三个整数，请你找出它们中的最大值。

下列公式可能对你有所帮助：

max(a,b)=(a+b+abs(a−b))2
输入格式
输入占一行，包含三个整数。

输出格式
输出格式为 X eh o maior，其中 X 为三个数中的最大值。

数据范围
1≤给定整数≤109
输入样例：
7 14 106
输出样例：
106 eh o maior
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int max = ((a + b) + abs(a - b)) / 2;
    max = ((max + c) + abs(max - c)) / 2;
    cout << max << " eh o maior" << endl;

    return 0;
}
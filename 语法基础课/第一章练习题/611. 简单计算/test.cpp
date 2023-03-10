#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定你两个产品的产品编号，产品数量以及产品单价。

请你计算买下两种产品一共需要花费多少钱。

输入格式
输入共两行。

每行包含两个整数以及一个浮点数，表示其中一件产品的产品编号，产品数量以及产品单价。

输出格式
输出格式为 VALOR A PAGAR: R$ X，其中 X 为产品总价值，保留两位小数。

数据范围
1≤产品编号,产品数量≤10000,
1.00≤产品单价≤10000.00
输入样例：
12 1 5.30
16 2 5.10
输出样例：
VALOR A PAGAR: R$ 15.50
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int id1, id2, num1, num2;
    double money1, money2;

    cin >> id1 >> num1 >> money1;
    cin >> id2 >> num2 >> money2;

    printf("VALOR A PAGAR: R$ %.2lf", num1 * money1 + num2 * money2);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
计算圆的面积的公式定义为 A=πR2。

请利用这个公式计算所给圆的面积。

π 的取值为 3.14159。

输入格式
输入包含一个浮点数，为圆的半径 R。

输出格式
输出格式为 A=X，其中 X 为圆的面积，用浮点数表示，保留四位小数。

数据范围
0<R<10000.00
输入样例：
2.00
输出样例：
A=12.5664
*/

#include <cstdio>

int main()
{
    double r;
    scanf("%lf", &r);
    double a = 3.14159 * r * r;
    printf("A=%.4lf", a);

    return 0;
}
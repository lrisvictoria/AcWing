#define _CRT_SECURE_NO_WARNINGS 1 

/*
读取表示三角形三条边的 3 个浮点数 A，B 和 C 并按降序排列，使 A 边是三边中最大的一边。

接下来，根据以下情况，确定它们可以组成的三角形类型：

如果 A≥B+C，则说明三条边不能构成三角形，请输出：NAO FORMA TRIANGULO
否则，说明三条边可以构成三角形，然后按如下情况输出：
如果A2=B2+C2，请输出：TRIANGULO RETANGULO
如果A2>B2+C2，请输出：TRIANGULO OBTUSANGULO
如果A2<B2+C2，请输出：TRIANGULO ACUTANGULO
如果三个边长度都相同，请输出：TRIANGULO EQUILATERO
如果只有两个边长度相同而第三个边长度不同，请输出：TRIANGULO ISOSCELES
输入格式
共一行，包含三个浮点数 A,B,C。

输出格式
输出 A,B,C 组成的三角形的类型。

注意，上述条件可能满足不止一条，这种情况下将所有类型名称，按题目介绍顺序输出，每行输出一条。

数据范围
0<A,B,C≤10.0
输入样例：
7.0 5.0 7.0
输出样例：
TRIANGULO ACUTANGULO
TRIANGULO ISOSCELES
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    // 排序 - a 最大
    if (b > a)
    {
        double tmp = a;
        a = b;
        b = tmp;
    }
    if (c > a)
    {
        double tmp = a;
        a = c;
        c = tmp;
    }
    if (c > b)
    {
        double tmp = b;
        b = c;
        c = tmp;
    }

    if (a >= b + c) cout << "NAO FORMA TRIANGULO" << endl;
    else
    {
        if (a * a == b * b + c * c) cout << "TRIANGULO RETANGULO" << endl;
        else if (a * a > b * b + c * c) cout << "TRIANGULO OBTUSANGULO" << endl;
        else if (a * a < b * b + c * c) cout << "TRIANGULO ACUTANGULO" << endl;
        if (a == b && b == c) cout << "TRIANGULO EQUILATERO" << endl;
        else if (a == b || a == c || b == c) cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
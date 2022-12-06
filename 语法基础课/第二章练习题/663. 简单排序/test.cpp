#define _CRT_SECURE_NO_WARNINGS 1 

/*
读取三个整数并按升序对它们进行排序。

输入格式
共一行，包含三个整数。

输出格式
首先，将三个整数按升序顺序输出，每行输出一个整数。

然后，输出一个空行。

紧接着，将三个整数按原输入顺序输出，每行输出一个整数。

数据范围
−100≤输入整数≤100,
输入整数各不相同。

输入样例：
7 21 -14
输出样例：
-14
7
21

7
21
-14
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int a1 = a, b1 = b, c1 = c;
    // 排序
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    cout << a << "\n" << b << "\n" << c << "\n" << endl;
    cout << a1 << "\n" << b1 << "\n" << c1 << endl;

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
读取四个整数 A,B,C,D，用来表示游戏的开始时间和结束时间。

其中 A 和 B 为开始时刻的小时和分钟数，C 和 D 为结束时刻的小时和分钟数。

请你计算游戏的持续时间。

比赛最短持续 1 分钟，最长持续 24 小时。

输入格式
共一行，包含四个整数 A,B,C,D。

输出格式
输出格式为 O JOGO DUROU X HORA(S) E Y MINUTO(S)，表示游戏共持续了 X 小时 Y 分钟。

数据范围
0≤A,C≤23,
0≤B,D≤59
输入样例1：
7 8 9 10
输出样例1：
O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
输入样例2：
7 7 7 7
输出样例2：
O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
输入样例3：
7 10 8 9
输出样例3：
O JOGO DUROU 0 HORA(S) E 59 MINUTO(S)
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < c)
    {
        if (b > d) cout << "O JOGO DUROU " << c - a - 1 << " HORA(S) E " << d + 60 - b << " MINUTO(S)" << endl;
        else cout << "O JOGO DUROU " << c - a << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
    }
    else if (a == c)
    {
        if (b > d) cout << "O JOGO DUROU 23 HORA(S) E " << d + 60 - b << " MINUTO(S)" << endl;
        else if (b < d) cout << "O JOGO DUROU 0 HORA(S) E " << d - b << " MINUTO(S)" << endl;
        else cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else
    {
        if (b > d) cout << "O JOGO DUROU " << c + 23 - a << " HORA(S) E " << d + 60 - b << " MINUTO(S)" << endl;
        else cout << "O JOGO DUROU " << c + 23 - a << " HORA(S) E " << d - b << " MINUTO(S)" << endl;
    }
    return 0;
}
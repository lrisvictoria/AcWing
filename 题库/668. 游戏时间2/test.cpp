#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ�ĸ����� A,B,C,D��������ʾ��Ϸ�Ŀ�ʼʱ��ͽ���ʱ�䡣

���� A �� B Ϊ��ʼʱ�̵�Сʱ�ͷ�������C �� D Ϊ����ʱ�̵�Сʱ�ͷ�������

���������Ϸ�ĳ���ʱ�䡣

������̳��� 1 ���ӣ������ 24 Сʱ��

�����ʽ
��һ�У������ĸ����� A,B,C,D��

�����ʽ
�����ʽΪ O JOGO DUROU X HORA(S) E Y MINUTO(S)����ʾ��Ϸ�������� X Сʱ Y ���ӡ�

���ݷ�Χ
0��A,C��23,
0��B,D��59
��������1��
7 8 9 10
�������1��
O JOGO DUROU 2 HORA(S) E 2 MINUTO(S)
��������2��
7 7 7 7
�������2��
O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)
��������3��
7 10 8 9
�������3��
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
#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ�������� A �� B����ʾ��Ϸ�Ŀ�ʼʱ��ͽ���ʱ�䣬��СʱΪ��λ��

Ȼ�����������Ϸ�ĳ���ʱ�䣬��֪��Ϸ������һ�쿪ʼ������һ������������ʱ��Ϊ 24 Сʱ��

��� A �� B ��ȣ�����Ϊ������ 24 Сʱ��

�����ʽ
��һ�У������������� A �� B��

�����ʽ
�����ʽΪ O JOGO DUROU X HORA(S)������ X Ϊ��Ϸ����ʱ�䡣

���ݷ�Χ
0��A,B��23
��������1��
16 2
�������1��
O JOGO DUROU 10 HORA(S)
��������2��
0 0
�������2��
O JOGO DUROU 24 HORA(S)
��������3��
2 16
�������3��
O JOGO DUROU 14 HORA(S)
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b) cout << "O JOGO DUROU " << (b + 24) - a << " HORA(S)" << endl;
    else if (a < b) cout << "O JOGO DUROU " << b - a << " HORA(S)" << endl;
    else cout << "O JOGO DUROU 24 HORA(S)" << endl;

    return 0;
}
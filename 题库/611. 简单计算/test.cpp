#define _CRT_SECURE_NO_WARNINGS 1 

/*
������������Ʒ�Ĳ�Ʒ��ţ���Ʒ�����Լ���Ʒ���ۡ�

��������������ֲ�Ʒһ����Ҫ���Ѷ���Ǯ��

�����ʽ
���빲���С�

ÿ�а������������Լ�һ������������ʾ����һ����Ʒ�Ĳ�Ʒ��ţ���Ʒ�����Լ���Ʒ���ۡ�

�����ʽ
�����ʽΪ VALOR A PAGAR: R$ X������ X Ϊ��Ʒ�ܼ�ֵ��������λС����

���ݷ�Χ
1�ܲ�Ʒ���,��Ʒ������10000,
1.00�ܲ�Ʒ���ۡ�10000.00
����������
12 1 5.30
16 2 5.10
���������
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
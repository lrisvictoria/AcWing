#define _CRT_SECURE_NO_WARNINGS 1 

/*
ABC ��˾������Ա����н����н���������ʾ��

    нˮ                ��н����
0 - 400.00                15%
400.01 - 800.00           12%
800.01 - 1200.00          10%
1200.01 - 2000.00         7%
���� 2000.00              4%
��ȡԱ���Ĺ��ʣ����㲢���Ա�����¹��ʣ��Լ�Ա�����ӵ��������н���ȡ�

�����ʽ
��һ�У�����һ��������λС���ĸ�������

�����ʽ
�����ʽ������ʾ��

��һ����� Novo salario: X��X ��ʾԱ���¹��ʣ�������λС����

�ڶ������ Reajuste ganho: Y��Y ��ʾԱ�����ӵľ���������ֵ��������λС����

��������� Em percentual: Z��Z ��ʾ��н���ȣ�ע���ðٷֱȱ�ʾ��

���ݷ�Χ
0��ԭ���ʡ�2500.00
����������
400.00
���������
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double salary;
    cin >> salary;

    double x; // �ٷֱ�

    if (salary >= 0 && salary <= 400) x = 0.15;
    else if (salary > 400 && salary <= 800) x = 0.12;
    else if (salary > 800 && salary <= 1200) x = 0.10;
    else if (salary > 1200 && salary <= 2000) x = 0.07;
    else x = 0.04;

    printf("Novo salario: %.2lf\n", salary + (x * salary));
    printf("Reajuste ganho: %.2lf\n", salary * x);
    printf("Em percentual: %.0lf %%\n", x * 100);


    return 0;
}
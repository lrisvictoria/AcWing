#define _CRT_SECURE_NO_WARNINGS 

/*
��ȡ���������� A��B �� C ����֤�Ƿ�����������γ������Ρ�

������ܣ�����㲢��������ε��ܳ���

Perimetro = XX.X

��������ܣ�����㲢����� A �� B Ϊ���� C Ϊ�ߵ����������

Area = XX.X

�����ʽ
��һ�У��������������� A,B,C��

�����ʽ
����Ŀ������ʽ������𰸣��𰸱���һλС����

���ݷ�Χ
0<A,B,C<100.0
��������1��
6.0 4.0 2.0
�������1��
Area = 10.0
��������2��
6.0 4.0 2.1
�������2��
Perimetro = 12.1
*/

#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a)
        printf("Perimetro = %.1lf\n", a + b + c);
    else
        printf("Area = %.1lf\n", ((a + b) * c) / 2);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
�������������� A��B �� C��

Ȼ�󣬼�������ͼ�ε������

�ױ�Ϊ A����Ϊ C �������Ρ�
�뾶 C ��Բ������=3.14159��
�ױ�Ϊ A �� B����Ϊ C �����Ρ�
�߳�Ϊ B �������Ρ�
�߳�Ϊ A �� B �ĳ����Ρ�
�����ʽ
���빲һ�У�������������һλС���ĸ����� A��B��C��

�����ʽ
��������У���ʽ������ʾ��

��һ�У���ʽΪ TRIANGULO: X������ X Ϊ���������������

�ڶ��У���ʽΪ CIRCULO: X������ X Ϊ����Բ�������

�����У���ʽΪ TRAPEZIO: X������ X Ϊ�������������

�����У���ʽΪ QUADRADO: X������ X Ϊ���������������

�����У���ʽΪ RETANGULO: X������ X Ϊ���󳤷��������

���д𰸱�����λС����

���ݷ�Χ
0��A,B,C��10000.0
����������
3.0 4.0 5.2
���������
TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000
*/

#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    printf("TRIANGULO: %.3lf\n", (1 / 2.0) * a * c);
    printf("CIRCULO: %.3lf\n", 3.14159 * c * c);
    printf("TRAPEZIO: %.3lf\n", ((a + b) * c) / 2);
    printf("QUADRADO: %.3lf\n", b * b);
    printf("RETANGULO: %.3lf\n", a * b);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ��ʾ�����������ߵ� 3 �������� A��B �� C �����������У�ʹ A ��������������һ�ߡ�

���������������������ȷ�����ǿ�����ɵ����������ͣ�

��� A��B+C����˵�������߲��ܹ��������Σ��������NAO FORMA TRIANGULO
����˵�������߿��Թ��������Σ�Ȼ��������������
���A2=B2+C2���������TRIANGULO RETANGULO
���A2>B2+C2���������TRIANGULO OBTUSANGULO
���A2<B2+C2���������TRIANGULO ACUTANGULO
��������߳��ȶ���ͬ���������TRIANGULO EQUILATERO
���ֻ�������߳�����ͬ���������߳��Ȳ�ͬ���������TRIANGULO ISOSCELES
�����ʽ
��һ�У��������������� A,B,C��

�����ʽ
��� A,B,C ��ɵ������ε����͡�

ע�⣬���������������㲻ֹһ������������½������������ƣ�����Ŀ����˳�������ÿ�����һ����

���ݷ�Χ
0<A,B,C��10.0
����������
7.0 5.0 7.0
���������
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

    // ���� - a ���
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
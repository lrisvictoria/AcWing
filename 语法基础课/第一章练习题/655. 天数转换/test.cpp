#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ��Ӧ��һ���˵����䣨����Ϊ��λ��������ֵ����ת��Ϊ�꣬�º��ձ�ʾ��ʽ������ꡢ�¡��շֱ��Ӧ ano(s), mes(es), dia(s)��

ע�⣺Ϊ�˷�����㣬����ȫ�� 365 �죬ÿ�� 30 �졣 ���ݱ�֤��������� 12 ���ºͼ������������� 360,363 �� 364��

�����ʽ
����һ������ N��

�����ʽ
����������������ת�����������

���ݷ�Χ
1��N��1000000
����������
400
���������
1 ano(s)
1 mes(es)
5 dia(s)
*/

#include <iostream>

using namespace std;

int main()
{
    int day;
    cin >> day;

    cout << day / 365 << " ano(s)" << endl;
    day %= 365;
    cout << day / 30 << " mes(es)" << endl;
    day %= 30;
    cout << day / 1 << " dia(s)" << endl;

    return 0;
}
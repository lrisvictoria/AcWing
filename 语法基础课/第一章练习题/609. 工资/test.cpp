#define _CRT_SECURE_NO_WARNINGS 1 

/*
���дһ�����򣬿��Զ�ȡһ��Ա����Ա����ţ����¹�����ʱ����Сʱ���Լ�ʱн����������Ĺ��������������а���Ա����ź�Ա�������롣

�����ʽ
�����������������һ�����������ֱ����Ա����ţ�����ʱ���Լ�ʱн��

ÿ����ռһ�С�

�����ʽ
��������У���һ�и�ʽΪ NUMBER = X������ X ΪԱ����š�

�ڶ��и�ʽΪ SALARY = U$ Y������ Y Ϊ��Ա�������룬������λС����

���ݷ�Χ
1��Ա����š�100,
1���ܹ���ʱ����200,
1��ʱн��50
����������
25
100
5.50
���������
NUMBER = 25
SALARY = U$ 550.00
*/

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int number, time;
    double salary;
    cin >> number;
    cin >> time;
    cin >> salary;

    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2lf\n", time * salary);

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ��������ֵ��

�ڴ�֮�󣬼������ǵĳ˻���������洢����Ϊ PROD �ı����С�

��������������ʾ��

�����ʽ
�����У�ÿ�а���һ��������

�����ʽ
�����ʽΪ PROD = X������ X Ϊ�˻������

���ݷ�Χ
��������������ľ���ֵ�������� 10000��

����������
3
9
���������
PROD = 27
*/

#include <iostream>

using namespace std;

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    int PROD = num1 * num2;

    cout << "PROD = " << PROD << endl;

    return 0;
}
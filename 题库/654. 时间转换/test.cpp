#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡһ������ֵ�����ǹ�����ĳ���¼��ĳ���ʱ�䣨����Ϊ��λ�������㽫��ת��ΪСʱ�����ӣ�������ʾ��

�����ʽ
����һ������ N��

�����ʽ
���ת�����ʱ���ʾ����ʽΪ hours:minutes:seconds��

���ݷ�Χ
1��N��1000000
����������
556
���������
0:9:16
*/

#include <iostream>

using namespace std;

int main()
{
    int second;
    cin >> second;

    cout << second / 3600 << ":" << (second % 3600) / 60 << ":" << second % 60 << endl;

    return 0;
}
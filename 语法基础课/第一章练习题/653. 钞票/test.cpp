#define _CRT_SECURE_NO_WARNINGS 1 

/*
����������У�����Ҫ��ȡһ������ֵ������ֽ�Ϊ���ų�Ʊ�ĺͣ�ÿ����ֵ�ĳ�Ʊ����ʹ�ö��ţ���Ҫ�����õĳ�Ʊ�����������١�

���������ȡֵ�ͳ�Ʊ�嵥��

��Ʊ�Ŀ�����ֵ�� 100,50,20,10,5,2,1��

����ʵ��֤�����ڱ����У�����ʹ������ĳ�Ʊ���Ա�֤���õĳ�Ʊ���������١�

�����ʽ
����һ������ N��

�����ʽ
������������������ȡ��ֵ�Լ�ÿ����ֵ�ĳ�Ʊ������������

���ݷ�Χ
0<N<1000000
����������
576
���������
576
5 nota(s) de R$ 100,00
1 nota(s) de R$ 50,00
1 nota(s) de R$ 20,00
0 nota(s) de R$ 10,00
1 nota(s) de R$ 5,00
0 nota(s) de R$ 2,00
1 nota(s) de R$ 1,00
*/

#include <iostream>

using namespace std;

int main()
{
    int arr[] = { 100, 50, 20, 10, 5, 2, 1 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int n;
    cin >> n;

    cout << n << endl;
    for (int i = 0; i < sz; ++i)
    {
        printf("%d nota(s) de R$ %d,00\n", n / arr[i], arr[i]);
        n -= arr[i] * (n / arr[i]);
    }

    return 0;
}

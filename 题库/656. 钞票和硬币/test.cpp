#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡһ����������С��λ�ĸ��������������Ҽ�ֵ��

�ڴ�֮�󣬽���ֵ�ֽ�Ϊ���ֳ�Ʊ��Ӳ�ҵĺͣ�ÿ����ֵ�ĳ�Ʊ��Ӳ��ʹ���������ޣ�Ҫ��ʹ�õĳ�Ʊ��Ӳ�ҵ��������������١�

��Ʊ����ֵ�� 100,50,20,10,5,2��

Ӳ�ҵ���ֵ�� 1,0.50,0.25,0.10,0.05 �� 0.01��

����ʵ��֤�����ڱ����У�����ʹ������ĳ�Ʊ��Ӳ�ҿ��Ա�֤���õĳ�Ʊ��Ӳ�����������١�

�����ʽ
����һ�������� N��

�����ʽ
����������������ÿ����ֵ�ĳ�Ʊ��Ӳ�ҵ�����������

���ݷ�Χ
0��N��1000000.00
����������
576.73
���������
NOTAS:
5 nota(s) de R$ 100.00
1 nota(s) de R$ 50.00
1 nota(s) de R$ 20.00
0 nota(s) de R$ 10.00
1 nota(s) de R$ 5.00
0 nota(s) de R$ 2.00
MOEDAS:
1 moeda(s) de R$ 1.00
1 moeda(s) de R$ 0.50
0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01
*/

// �Ŵ�

#include <iostream>

using namespace std;

int main()
{
    double money;
    cin >> money;
    double anote[] = { 100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00 };
    double acoin[] = { 1.00, 0.50, 0.25, 0.10, 0.05, 0.01 };

    cout << "NOTAS:" << endl;

    // ���㳮Ʊ
    for (int i = 0; i < 7; ++i)
    {
        printf("%d nota(s) de R$ %.2lf\n", (int)(money / anote[i]), anote[i]);
        money -= ((int)(money / anote[i])) * anote[i];
    }

    cout << "MOEDAS:" << endl;

    // ����Ӳ��
    for (int i = 0; i < 6; ++i)
    {
        printf("%d moeda(s) de R$ %.2lf\n", (int)(money / acoin[i] + 10e-3), acoin[i]);
        money -= ((int)(money / acoin[i] + 10e-3)) * acoin[i];
    }

    return 0;
}
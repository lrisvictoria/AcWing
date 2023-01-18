/*
����һ���ַ��� S
���Լ�һ��ģʽ�� P
�������ַ�����ֻ������СдӢ����ĸ�Լ����������֡�

ģʽ�� P
 ���ַ��� S
 �ж����Ϊ�Ӵ����֡�

���ģʽ�� P
 ���ַ��� S
 �����г��ֵ�λ�õ���ʼ�±ꡣ

�����ʽ
��һ���������� N
����ʾ�ַ��� P
 �ĳ��ȡ�

�ڶ��������ַ��� P
��

�������������� M
����ʾ�ַ��� S
 �ĳ��ȡ�

�����������ַ��� S
��

�����ʽ
��һ�У�������г���λ�õ���ʼ�±꣨�±�� 0
 ��ʼ������������֮���ÿո������

���ݷ�Χ
1��N��105

1��M��106
����������
3
aba
5
ababa
���������
0 2
*/

// ��⣺https://www.acwing.com/solution/content/164216/

#include <bits/stdc++.h>

using namespace std;

const int N = 100010, M = 1000010;

int ne[N];
char p[N], s[M];

int n, m;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n >> p + 1 >> m >> s + 1;

    for (int i = 2, j = 0; i <= n; i++) {
        while (j && p[i] != p[j + 1]) {
            j = ne[j];
        }
        if (p[i] == p[j + 1]) {
            j++;
        }
        ne[i] = j;
    }

    for (int i = 1, j = 0; i <= m; i++) {
        while (j && s[i] != p[j + 1]) {
            j = ne[j];
        }
        if (s[i] == p[j + 1]) {
            j++;
        }
        if (j == n) {
            cout << i - n << ' ';
            j = ne[j];
        }
    }

    return 0;
}
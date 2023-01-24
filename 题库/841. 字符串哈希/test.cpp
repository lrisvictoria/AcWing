/*
����һ������Ϊ n
 ���ַ������ٸ��� m
 ��ѯ�ʣ�ÿ��ѯ�ʰ����ĸ����� l1,r1,l2,r2
�������ж� [l1,r1]
 �� [l2,r2]
 �������������������ַ����Ӵ��Ƿ���ȫ��ͬ��

�ַ�����ֻ������СдӢ����ĸ�����֡�

�����ʽ
��һ�а������� n
 �� m
����ʾ�ַ������Ⱥ�ѯ�ʴ�����

�ڶ��а���һ������Ϊ n
 ���ַ������ַ�����ֻ������СдӢ����ĸ�����֡�

������ m
 �У�ÿ�а����ĸ����� l1,r1,l2,r2
����ʾһ��ѯ�����漰���������䡣

ע�⣬�ַ�����λ�ô� 1
 ��ʼ��š�

�����ʽ
����ÿ��ѯ�����һ���������������ַ����Ӵ���ȫ��ͬ����� Yes��������� No��

ÿ�����ռһ�С�

���ݷ�Χ
1��n,m��105
����������
8 3
aabbaabb
1 3 5 7
1 3 6 8
1 2 1 2
���������
Yes
No
Yes
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7907657/

#include <iostream>

using namespace std;

const int N = 100010;

typedef unsigned long long ull;

char str[N];
ull p[N], h[N];
int n, m, P = 131;

ull get(int l, int r)
{
    return h[r] - h[l - 1] * p[r - l + 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n >> m >> str + 1;

    p[0] = 1;
    for (int i = 1; i <= n; i++) {
        p[i] = p[i - 1] * P;
        h[i] = h[i - 1] * P + str[i];
    }

    while (m--) {
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        if (get(l1, r1) == get(l2, r2)) {
            puts("Yes");
        }
        else {
            puts("No");
        }
    }

    return 0;
}
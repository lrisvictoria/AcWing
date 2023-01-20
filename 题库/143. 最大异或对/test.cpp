/*
�ڸ����� N
 ������ A1��A2����AN
 ��ѡ���������� xor
��������㣬�õ��Ľ������Ƕ��٣�

�����ʽ
��һ������һ������ N
��

�ڶ������� N
 ������ A1
��AN
��

�����ʽ
���һ��������ʾ�𰸡�

���ݷ�Χ
1��N��105
,
0��Ai<231
����������
3
1 2 3
���������
3
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7883510/ ���ῴ�ʼ�

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010, M = 31 * N;

int son[M][2], a[N], idx, n;

void insert(int x)
{
    int p = 0;
    for (int i = 30; i >= 0; i--) {
        int u = x >> i & 1;
        if (!son[p][u]) {
            son[p][u] = ++idx;
        }
        p = son[p][u];
    }
}

int query(int x)
{
    int p = 0, res = 0;
    for (int i = 30; i >= 0; i--) {
        int u = x >> i & 1;
        if (son[p][!u]) {
            p = son[p][!u];
            res = res * 2 + !u;
        }
        else {
            p = son[p][u];
            res = res * 2 + u;
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int t = 0, res = 0;
    for (int i = 0; i < n; i++) {
        insert(a[i]);
        t = query(a[i]);
        res = max(res, a[i] ^ t);
    }

    cout << res << endl;

    return 0;
}
/*
在给定的 N
 个整数 A1，A2……AN
 中选出两个进行 xor
（异或）运算，得到的结果最大是多少？

输入格式
第一行输入一个整数 N
。

第二行输入 N
 个整数 A1
～AN
。

输出格式
输出一个整数表示答案。

数据范围
1≤N≤105
,
0≤Ai<231
输入样例：
3
1 2 3
输出样例：
3
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7883510/ 不会看笔记

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
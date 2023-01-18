/*
给定一个字符串 S
，以及一个模式串 P
，所有字符串中只包含大小写英文字母以及阿拉伯数字。

模式串 P
 在字符串 S
 中多次作为子串出现。

求出模式串 P
 在字符串 S
 中所有出现的位置的起始下标。

输入格式
第一行输入整数 N
，表示字符串 P
 的长度。

第二行输入字符串 P
。

第三行输入整数 M
，表示字符串 S
 的长度。

第四行输入字符串 S
。

输出格式
共一行，输出所有出现位置的起始下标（下标从 0
 开始计数），整数之间用空格隔开。

数据范围
1≤N≤105

1≤M≤106
输入样例：
3
aba
5
ababa
输出样例：
0 2
*/

// 题解：https://www.acwing.com/solution/content/164216/

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
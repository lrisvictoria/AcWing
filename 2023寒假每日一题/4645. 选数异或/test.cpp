/*
给定一个长度为 n 的数列 A1,A2,⋅⋅⋅,An 和一个非负整数 x，给定 m 次查询，每次询问能否从某个区间 [l,r] 中选择两个数使得他们的异或等于 x。

输入格式
输入的第一行包含三个整数 n,m,x。

第二行包含 n 个整数 A1,A2,⋅⋅⋅,An。

接下来 m 行，每行包含两个整数 li,ri 表示询问区间 [li,ri]。

输出格式
对于每个询问，如果该区间内存在两个数的异或为 x 则输出 yes，否则输出 no。

数据范围
对于 20% 的评测用例，1≤n,m≤100；
对于 40% 的评测用例，1≤n,m≤1000；
对于所有评测用例，1≤n,m≤100000，0≤x<220，1≤li≤ri≤n，0≤Ai<220。

输入样例：
4 4 1
1 2 3 4
1 4
1 2
2 3
3 3
输出样例：
yes
no
yes
no
样例解释
显然整个数列中只有 2,3 的异或为 1。
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7638950/

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int dp[N], n, m, x;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> n >> m >> x;
    unordered_map<int, int> last;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        dp[i] = max(dp[i - 1], last[a ^ x]);
        last[a] = i;
    }

    while (m--) {
        int l, r;
        cin >> l >> r;
        if (dp[r] >= l) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }

    return 0;
}
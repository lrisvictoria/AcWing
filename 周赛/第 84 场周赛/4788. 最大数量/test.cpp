/*
某商场在一天中一共来了 n 个客人。

每个客人进入商场的具体时刻（精确到分钟）已知。

请你计算并输出在同一时刻（精确到分钟）进入商场的最大客人数量。

输入格式
第一行包含整数 n。

接下来 n 行，每行包含两个整数 h,m，表示一个客人在 h 时 m 分进入商场。

所有时间都按照时间先后顺序给出。

时间采用 24 小时制。

输出格式
一个整数，表示在同一时刻（精确到分钟）进入商场的最大客人数量。

数据范围
前 5 个测试点满足 1≤n≤10。
所有测试点满足 1≤n≤105，0≤hi≤23，0≤mi≤59。

输入样例1：
4
8 0
8 10
8 10
8 45
输出样例1：
2
输入样例2：
3
0 12
10 11
22 22
输出样例2：
1
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7621187/

#include <iostream>

using namespace std;

const int N = 1500;
int cnt[N];

int n, h, m, res;

int main()
{
    cin >> n;
    while (n--) {
        cin >> h >> m;
        int time = h * 60 + m;
        res = max(res, ++cnt[time]);
    }

    cout << res << endl;

    return 0;
}
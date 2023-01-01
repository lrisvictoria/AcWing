/*
给定一个长度为 n 的正整数序列 a1,a2,…,an。

如果将该序列从小到大排序，则可以得到另一个长度为 n 的正整数序列 b1,b2,…,bn。

现在，请你回答 m 个询问，询问共分为以下两种：

1 l r，请你计算并输出 ∑i=lrai。
2 l r，请你计算并输出 ∑i=lrbi。
输入格式
第一行包含整数 n。

第二行包含 n 个正整数 a1,a2,…,an。

第三行包含整数 m。

接下来 m 行，每行包含一个询问，格式如题面描述。

输出格式
共 m 行，每个询问输出一行答案。

数据范围
前 3 个测试点满足 1≤n,m≤10。
所有测试点满足 1≤n,m≤105，1≤ai≤109，1≤l≤r≤n。

输入样例1：
6
6 4 2 7 2 7
3
2 3 6
1 3 4
1 1 6
输出样例1：
24
9
28
输入样例2：
4
5 5 2 3
10
1 2 4
2 1 4
1 1 1
2 1 4
2 1 2
1 1 1
1 3 3
1 1 3
1 4 4
1 2 2
输出样例2：
10
15
5
15
5
5
2
12
3
5
输入样例3：
4
2 2 3 6
9
2 2 3
1 1 3
2 2 3
2 2 3
2 2 2
1 1 3
1 1 3
2 1 4
1 1 2
输出样例3：
5
7
5
5
2
7
7
13
4
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7621368/

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N = 100010;

ll a[N], b[N];

int n, m;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b + 1, b + n + 1);

    // 构造前缀和序列
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
        b[i] += b[i - 1];
    }

    cin >> m;
    while (m--) {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1) {
            cout << a[r] - a[l - 1] << endl;
        }
        else {
            cout << b[r] - b[l - 1] << endl;
        }
    }

    return 0;
}
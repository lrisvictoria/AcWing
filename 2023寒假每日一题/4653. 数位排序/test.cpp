/*
小蓝对一个数的数位之和很感兴趣，今天他要按照数位之和给数排序。

当两个数各个数位之和不同时，将数位和较小的排在前面，当数位之和相等时，将数值小的排在前面。

例如，2022 排在 409 前面，因为 2022 的数位之和是 6，小于 409 的数位之和 13。

又如，6 排在 2022 前面，因为它们的数位之和相同，而 6 小于 2022。

给定正整数 n，m，请问对 1 到 n 采用这种方法排序时，排在第 m 个的元素是多少？

输入格式
输入第一行包含一个正整数 n。

第二行包含一个正整数 m。

输出格式
输出一行包含一个整数，表示答案。

数据范围
对于 30% 的评测用例，1≤m≤n≤300。
对于 50% 的评测用例，1≤m≤n≤1000。
对于所有评测用例，1≤m≤n≤106。

输入样例：
13
5
输出样例：
3
样例解释
1 到 13 的排序为：1,10,2,11,3,12,4,13,5,6,7,8,9。

第 5 个数为 3。
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7649094/

#include <bits/stdc++.h>

using namespace std;

const int N = 1000010;

int a[N], b[N];
int n, m;

bool cmp(int x, int y)
{
    if (b[x] == b[y]) {
        return x < y;
    }
    else {
        return b[x] < b[y];
    }
}

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        a[i] = i;
        int tmp = i;
        while (tmp) {
            b[i] += tmp % 10;
            tmp /= 10;
        }
    }

    sort(a + 1, a + n + 1, cmp);

    cout << a[m] << endl;

    return 0;
}
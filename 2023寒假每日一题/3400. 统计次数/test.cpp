/*
给定两个正整数 n 和 k，求从 1 到 n 这 n 个正整数的十进制表示中 k 出现的次数。

输入格式
共一行，包含两个整数 n 和 k。

输出格式
输出一个整数，表示答案。

数据范围
1≤n≤106,
1≤k≤9
输入样例：
12 1
输出样例：
5
样例解释
从 1 到 12 这些整数中包含 1 的数字有 1,10,11,12，一共出现了 5 次 1。
*/

#include <iostream>

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int j = i;
        while (j) {
            if (j % 10 == k) {
                cnt++;
            }
            j /= 10;
        }
    }

    cout << cnt << endl;

    return 0;
}

// 题解：https://www.acwing.com/solution/content/157124/
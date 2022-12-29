/*
有 N 堆石子，每堆的石子数量分别为 a1,a2,…,aN。

你可以对石子堆进行合并操作，将两个相邻的石子堆合并为一个石子堆，例如，如果 a=[1,2,3,4,5]，合并第 2,3 堆石子，则石子堆集合变为 a=[1,5,4,5]。

我们希望通过尽可能少的操作，使得石子堆集合中的每堆石子的数量都相同。

请你输出所需的最少操作次数。

本题一定有解，因为可以将所有石子堆合并为一堆。

输入格式
第一行包含整数 T，表示共有 T 组测试数据。

每组数据第一行包含整数 N。

第二行包含 N 个整数 a1,a2,…,aN。

输出格式
每组数据输出一行结果。

数据范围
1≤T≤10,
1≤N≤105,
0≤ai≤106,
∑i=1nai≤106,
每个输入所有 N 之和不超过 105。

输入样例：
3
6
1 2 3 1 1 1
3
2 2 3
5
0 0 0 0 0
输出样例：
3
2
0
样例解释
第一组数据，只需要用 3 个操作来完成：

   1 2 3 1 1 1
-> 3 3 1 1 1
-> 3 3 2 1
-> 3 3 3
第二组数据，只需要用 2 个操作来完成：

   2 2 3
-> 2 5
-> 7
第三组数据，我们什么都不需要做。
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7584859/

#include <iostream>

using namespace std;

const int N = 100010;

/*
* n    每组中数据个数
* t    册数次数
* w[i] 存放数据的数组
*/

int n, t, w[N];

bool check(int cnt)
{
    for (int i = 0, s = 0; i < n; i++) {
        /*
        * cnt  每堆中的石子数
        * s    判断每段是否为 cnt
        */
        s += w[i];
        if (s > cnt) {
            return false;
        }
        if (s == cnt) {
            s = 0;
        }
    }
    return true;
}

int main()
{
    cin >> t;

    while (t--) {
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            sum += w[i];
        }

        // 至少有一堆
        for (int i = n; i; i--) {
            // i 为堆数
            // 如果 sum 能整除堆数且每堆数量 sum / i 成立
            // 就直接输出，这时 n - i 就是最少操作次数，因为此刻 i 是最大的
            if (sum % i == 0 && check(sum / i)) {
                cout << n - i << endl;
                break;
            }
        }
    }

    return 0;
}
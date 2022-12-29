/*
Farmer John 计划为奶牛们新开办一所大学！

有 N 头奶牛可能会入学。

每头奶牛最多愿意支付 ci 的学费。

Farmer John 可以设定所有奶牛入学需要支付的学费。

如果这笔学费大于一头奶牛愿意支付的最高金额，那么这头奶牛就不会入学。

Farmer John 想赚尽可能多的钱，从而可以给他的讲师提供一笔可观的工资。

请求出他能赚到的钱的数量，以及此时应当收取多少学费。

输入格式
输入的第一行包含 N。

第二行包含 N 个整数 c1,c2,…,cN，其中 ci 是奶牛 i 愿意支付的最高学费金额。

输出格式
输出 Farmer John 可以赚到的最大金额以及最优情况下他应该收取的学费。如果有多个解，输出收取学费最小的解。

注意这个问题涉及到的整数可能需要使用 64 位整数型（例如，Java 中的 “long”，C/C++ 中的 “long long”）。

数据范围
1≤N≤105,
1≤ci≤106。

输入样例：
4
1 6 4 6
输出样例：
12 4
样例解释
如果 Farmer John 收费 4，那么 3 头奶牛将会入学，从而使他赚取 3×4=12 的金额。
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7585625/

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N = 100010;

int a[N], n;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // 对数组进行排序
    sort(a, a + n);

    // tuition - 最大学费
    // maxnum  - 满足最大学费时，奶牛原意支付的金额
    // cnt     - 当前能付得起学费的奶牛数
    // money   - 当前位置的学费
    ll tuition = 0, maxnum = 0;
    for (ll i = n - 1, cnt = 1; i >= 0; i--, cnt++) {
        ll money = cnt * a[i];
        // 当前位置的总学费大于等于最大学费，则更新
        if (money >= tuition) {
            maxnum = a[i];
            tuition = money;
        }
    }

    cout << tuition << " " << maxnum << endl;

    return 0;
}
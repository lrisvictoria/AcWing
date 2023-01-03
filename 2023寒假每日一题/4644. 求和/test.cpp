/*
给定 n 个整数 a1,a2,⋅⋅⋅,an，求它们两两相乘再相加的和，即

S=a1⋅a2+a1⋅a3+⋅⋅⋅+a1⋅an+a2⋅a3+⋅⋅⋅+an−2⋅an−1+an−2⋅an+an−1⋅an
输入格式
输入的第一行包含一个整数 n。

第二行包含 n 个整数 a1,a2,⋅⋅⋅,an。

输出格式
输出一个整数 S，表示所求的和。

请使用合适的数据类型进行运算。

数据范围
对于 30% 的数据，1≤n≤1000，1≤ai≤100。
对于所有评测用例，1≤n≤200000，1≤ai≤1000。

输入样例：
4
1 3 6 9
输出样例：
117
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7637894/

// 前缀和

//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//const int N = 200010;
//ll a[N], s[N], n;
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cout.tie(NULL);
//
//    cin >> n;
//    for (int i = 1; i <= n; i++) {
//        cin >> a[i];
//        s[i] = s[i - 1] + a[i];
//    }
//
//    ll res = 0;
//    for (int i = 1; i <= n - 1; i++) {
//        res += a[i] * (s[n] - s[i]);
//    }
//
//    cout << res << endl;
//
//    return 0;
//}

// 数学归纳

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 200010;
int a[N], n;

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    cin >> n;
    ll sum = 0, res = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    for (int i = 1; i <= n; i++) {
        res += a[i] * (sum - a[i]);
    }

    cout << res / 2 << endl;

    return 0;
}
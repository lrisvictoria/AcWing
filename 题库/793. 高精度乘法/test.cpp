
/*
给定两个正整数（不含前导 0），计算它们的差，计算结果可能为负数。

输入格式
共两行，每行包含一个整数。

输出格式
共一行，包含所求的差。

数据范围
1≤整数长度≤105
输入样例：
32
11
输出样例：
21
*/

// 大数 * 小数

#include <iostream>
#include <vector>

using namespace std;

vector<int> Mul(vector<int>& A, int b)
{
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size(); i++) {
        t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while (t) {
        C.push_back(t % 10);
        t /= 10;
    }

    // 去除前导 0 
    while (C.size() > 1 && C.back() == 0) {
        C.pop_back();
    }
    return C;
}

int main()
{
    string a;
    int b;
    cin >> a >> b;
    vector<int> A;

    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    auto C = Mul(A, b);

    for (int i = C.size() - 1; i >= 0; i--) {
        cout << C[i];
    }

    return 0;
}
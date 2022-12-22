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

#include <iostream>
#include <vector>

using namespace std;

bool cmp(vector<int>& A, vector<int>& B)
{
    // 如果 A 的位数小于或等于 B 的位数
    if (A.size() != B.size()) {
        return A.size() > B.size();
    }

    // A 的位数大于 B 的位数
    for (int i = A.size() - 1; i >= 0; i--) {
        if (A[i] != B[i]) {
            return A[i] > B[i];
        }
    }

    // 此时 A == B
    return true;
}

vector<int> Sub(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    // 借位
    int t = 0;
    // 此时 A 的位数是 大于 B 的位数的
    // 5 4 3 2 1
    // 1 2 3
    for (int i = 0; i < A.size(); i++) {
        t += A[i];
        if (i < B.size()) {
            t -= B[i];
        }
        // 相减结果可能为负数 % 10 可以得到 0~9 的位数
        // 此时是需要借位的
        C.push_back((t + 10) % 10);
        // 如果 t < 0 说明要借位
        if (t < 0) {
            t = -1;
        }
        else {
            t = 0;
        }
    }

    // 321
    // 021
    // 相减后结果为 300, 去除前导0
    while (C.size() > 1 && C.back() == 0) {
        C.pop_back();
    }
    return C;
}

int main()
{
    string a, b;
    vector<int> A, B;

    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i--) {
        B.push_back(b[i] - '0');
    }

    // 如果 A >= B 则正常相减，结果为正
    if (cmp(A, B)) {
        auto C = Sub(A, B);
        for (int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }
    }
    else {
        auto C = Sub(B, A);
        cout << "-";
        for (int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }
    }

    return 0;
}
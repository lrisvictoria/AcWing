/*
给定两个正整数（不含前导 0），计算它们的和。

输入格式
共两行，每行包含一个整数。

输出格式
共一行，包含所求的和。

数据范围
1≤整数长度≤100000
输入样例：
12
23
输出样例：
35
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> Add(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        // 如果 i 当前位置小于 A 和 B 的最大长度，则相加
        if (i < A.size()) {
            t += A[i];
        }
        if (i < B.size()) {
            t += B[i];
        }
        C.push_back(t % 10);
        t /= 10;
    }
    if (t) {
        C.push_back(1);
    }
    return C;
}

int main()
{
    // 将数字存入 string 中
    string a, b;
    vector<int> A, B;

    cin >> a >> b;

    // 将 string 中倒着存入
    // 1 2 3 4 5
    // 5 4 3 2 1
    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i--) {
        B.push_back(b[i] - '0');
    }

    auto C = Add(A, B);

    for (int i = C.size() - 1; i >= 0; i--) {
        cout << C[i];
    }

    return 0;
}
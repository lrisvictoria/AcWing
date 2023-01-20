/*
输入一个长度为 n
 的整数数列，从小到大输出前 m
 小的数。

输入格式
第一行包含整数 n
 和 m
。

第二行包含 n
 个整数，表示整数数列。

输出格式
共一行，包含 m
 个整数，表示整数数列中前 m
 小的数。

数据范围
1≤m≤n≤105
，
1≤数列中元素≤109
输入样例：
5 3
4 5 1 3 2
输出样例：
1 2 3
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7876073/

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int hp[N], sz, n, m;

// 向下调整
void down(int u)
{
    // 求父亲，左右孩子中最小的一个
    int t = u;
    // 若左孩子不超过 sz 并且左孩子小于父亲
    if (2 * u <= sz && hp[2 * u] < hp[t]) {
        t = 2 * u;
    }
    // 若右孩子不超过 sz 并且右孩子比现在最小的 t 更小
    if (2 * u + 1 <= sz && hp[2 * u + 1] < hp[t]) {
        t = 2 * u + 1;
    }
    // 如果 t 和 u 不等，则需要向下调整
    if (t != u) {
        swap(hp[t], hp[u]);
        // 当前 t 为刚刚调整下来的位置，继续检查 t 是否需要调整
        // 递归处理
        down(t);
    }
}

int up(int u)
{
    // 父亲不为假并且父亲大于儿子
    // 就把父亲拉下来，并让儿子篡位
    while (u / 2 && hp[u / 2] > hp[u]) {
        swap(hp[u / 2], hp[u]);
        u /= 2;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;

    // 从 1 位置开始
    for (int i = 1; i <= n; i++) {
        cin >> hp[i];
    }
    sz = n;

    // 向下调整建堆
    for (int i = n / 2; i; i--) {
        down(i);
    }

    // 每次打印堆顶并删除
    // 之后交换堆顶和堆底元素，并让 sz -- ，向下调整
    for (int i = 1; i <= m; i++) {
        cout << hp[1] << ' ';
        swap(hp[1], hp[sz--]);
        down(1);
    }

    return 0;
}
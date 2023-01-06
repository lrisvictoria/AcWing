/*
给定 n 个区间 [li,ri]，要求合并所有有交集的区间。

注意如果在端点处相交，也算有交集。

输出合并完成后的区间个数。

例如：[1,3] 和 [2,6] 可以合并为一个区间 [1,6]。

输入格式
第一行包含整数 n。

接下来 n 行，每行包含两个整数 l 和 r。

输出格式
共一行，包含一个整数，表示合并区间完成后的区间个数。

数据范围
1≤n≤100000,
−109≤li≤ri≤109
输入样例：
5
1 2
2 4
5 6
7 8
7 9
输出样例：
3
*/
#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

vector<pii> sec;
int n;

void merge(vector<pii>& sec)
{
    vector<pii> res;
    int st = -2e9, ed = -2e9;

    sort(sec.begin(), sec.end()); // 对区间进行排序

    for (auto se : sec) {
        if (ed < se.first) {
            if (st != -2e9) {
                res.push_back({ st, ed });
            }
            // 更新区间
            st = se.first, ed = se.second;
        }
        else { // ed >= se.first
            // 取 ed 和 另一个右端点较大的一个
            ed = max(ed, se.second);
        }
    }
    if (st != -2e9) {
        res.push_back({ st, ed });
    }
    sec = res;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        sec.push_back({ l, r });
    }

    merge(sec);

    cout << sec.size() << endl;

    return 0;
}
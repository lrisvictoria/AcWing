/*
实现一个队列，队列初始为空，支持四种操作：

push x – 向队尾插入一个数 x
；
pop – 从队头弹出一个数；
empty – 判断队列是否为空；
query – 查询队头元素。
现在要对队列进行 M
 个操作，其中的每个操作 3
 和操作 4
 都要输出相应的结果。

输入格式
第一行包含整数 M
，表示操作次数。

接下来 M
 行，每行包含一个操作命令，操作命令为 push x，pop，empty，query 中的一种。

输出格式
对于每个 empty 和 query 操作都要输出一个查询结果，每个结果占一行。

其中，empty 操作的查询结果为 YES 或 NO，query 操作的查询结果为一个整数，表示队头元素的值。

数据范围
1≤M≤100000
,
1≤x≤109
,
所有操作保证合法。

输入样例：
10
push 6
empty
query
pop
empty
push 3
push 4
pop
query
push 6
输出样例：
NO
6
YES
4
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

// hh  队头 初始化为  0 
// tt  队尾 初始化为 -1 依照个人习惯
// q[] 队列

int q[N], tt = -1, hh;

// 从队尾入
void push(int x)
{
    q[++tt] = x;
}

// 判空
bool empty()
{
    return hh > tt; // hh 初始为 0，tt 初始为 -1
}

// 从队头出
void pop()
{
    if (!empty()) {
        hh++;
    }
}

// 去队头
int query()
{
    if (!empty()) {
        return q[hh];
    }
}

int main()
{
    int m;
    cin >> m;
    while (m--) {
        string s;
        int x;
        cin >> s;
        if (s == "push") {
            cin >> x;
            push(x);
        }
        else if (s == "pop") {
            pop();
        }
        else if (s == "empty") {
            if (empty()) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << query() << endl;
        }
    }

    return 0;
}
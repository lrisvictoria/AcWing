/*
实现一个栈，栈初始为空，支持四种操作：

push x – 向栈顶插入一个数 x
；
pop – 从栈顶弹出一个数；
empty – 判断栈是否为空；
query – 查询栈顶元素。
现在要对栈进行 M
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

其中，empty 操作的查询结果为 YES 或 NO，query 操作的查询结果为一个整数，表示栈顶元素的值。

数据范围
1≤M≤100000
,
1≤x≤109

所有操作保证合法。

输入样例：
10
push 5
query
push 6
pop
query
pop
empty
push 4
query
empty
输出样例：
5
5
YES
4
NO
*/

// 题解：

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

// top 指向栈顶的下一个位置
int st[N], top = 0;

// 压栈 - 压栈之后让 top ++
void push(int x)
{
    st[top++] = x;
}

// 若 top == 0 ，说明栈空
bool empty()
{
    return top == 0;
}

// 出栈 - 栈不为空，则出栈，top-- 就代表出栈
void pop()
{
    if (!empty()) {
        top--;
    }
}

// 去栈顶 - 栈不为空，则返回 top - 1 ，因为 top 是栈顶的下一个元素
int query()
{
    if (!empty()) {
        return st[top - 1];
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
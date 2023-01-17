/*
实现一个单链表，链表初始为空，支持三种操作：

向链表头插入一个数；
删除第 k
 个插入的数后面的数；
在第 k
 个插入的数后插入一个数。
现在要对该链表进行 M
 次操作，进行完所有操作后，从头到尾输出整个链表。

注意:题目中第 k
 个插入的数并不是指当前链表的第 k
 个数。例如操作过程中一共插入了 n
 个数，则按照插入的时间顺序，这 n
 个数依次为：第 1
 个插入的数，第 2
 个插入的数，…第 n
 个插入的数。

输入格式
第一行包含整数 M
，表示操作次数。

接下来 M
 行，每行包含一个操作命令，操作命令可能为以下几种：

H x，表示向链表头插入一个数 x
。
D k，表示删除第 k
 个插入的数后面的数（当 k
 为 0
 时，表示删除头结点）。
I k x，表示在第 k
 个插入的数后面插入一个数 x
（此操作中 k
 均大于 0
）。
输出格式
共一行，将整个链表从头到尾输出。

数据范围
1≤M≤100000

所有操作保证合法。

输入样例：
10
H 9
I 1 1
D 1
D 0
H 6
I 3 6
I 4 5
I 4 5
I 3 4
D 6
输出样例：
6 4 6 5
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7852395/


#include <iostream>

using namespace std;

const int N = 100010;

int head, e[N], ne[N], idx;

// 初始化
void init()
{
    head = -1;
    idx = 0;
}

// 头删
void pushFront(int x)
{
    e[idx] = x, ne[idx] = head, head = idx++;
}

// 删除 k 的后驱节点
void popAfterk(int k)
{
    ne[k] = ne[ne[k]];
}

// 在 k 后插入一个节点
void pushAfterk(int k, int x)
{
    e[idx] = x, ne[idx] = ne[k], ne[k] = idx++;
}

int main()
{
    int m;
    cin >> m;
    init();
    while (m -- ) {
        int x, k;
        char ch;
        cin >> ch;
        if (ch == 'H') {
            cin >> x;
            pushFront(x);
        } else if (ch == 'D') {
            cin >> k;
            // 头删
            if (!k) {
                head = ne[head]; // 此刻为头删
            } else {
                popAfterk(k - 1); // 删除的是 k - 1 的节点的后驱节点
            }
        } else {
            cin >> k >> x;
            pushAfterk(k - 1, x);
        }
    }
    
    for (int i = head; i != -1; i = ne[i]) {
        cout << e[i] << ' ';
    }
    
    return 0;
}
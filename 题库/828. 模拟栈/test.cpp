/*
ʵ��һ��ջ��ջ��ʼΪ�գ�֧�����ֲ�����

push x �C ��ջ������һ���� x
��
pop �C ��ջ������һ������
empty �C �ж�ջ�Ƿ�Ϊ�գ�
query �C ��ѯջ��Ԫ�ء�
����Ҫ��ջ���� M
 �����������е�ÿ������ 3
 �Ͳ��� 4
 ��Ҫ�����Ӧ�Ľ����

�����ʽ
��һ�а������� M
����ʾ����������

������ M
 �У�ÿ�а���һ�����������������Ϊ push x��pop��empty��query �е�һ�֡�

�����ʽ
����ÿ�� empty �� query ������Ҫ���һ����ѯ�����ÿ�����ռһ�С�

���У�empty �����Ĳ�ѯ���Ϊ YES �� NO��query �����Ĳ�ѯ���Ϊһ����������ʾջ��Ԫ�ص�ֵ��

���ݷ�Χ
1��M��100000
,
1��x��109

���в�����֤�Ϸ���

����������
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
���������
5
5
YES
4
NO
*/

// ��⣺

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

// top ָ��ջ������һ��λ��
int st[N], top = 0;

// ѹջ - ѹջ֮���� top ++
void push(int x)
{
    st[top++] = x;
}

// �� top == 0 ��˵��ջ��
bool empty()
{
    return top == 0;
}

// ��ջ - ջ��Ϊ�գ����ջ��top-- �ʹ����ջ
void pop()
{
    if (!empty()) {
        top--;
    }
}

// ȥջ�� - ջ��Ϊ�գ��򷵻� top - 1 ����Ϊ top ��ջ������һ��Ԫ��
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
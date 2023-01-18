/*
ʵ��һ�����У����г�ʼΪ�գ�֧�����ֲ�����

push x �C ���β����һ���� x
��
pop �C �Ӷ�ͷ����һ������
empty �C �ж϶����Ƿ�Ϊ�գ�
query �C ��ѯ��ͷԪ�ء�
����Ҫ�Զ��н��� M
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

���У�empty �����Ĳ�ѯ���Ϊ YES �� NO��query �����Ĳ�ѯ���Ϊһ����������ʾ��ͷԪ�ص�ֵ��

���ݷ�Χ
1��M��100000
,
1��x��109
,
���в�����֤�Ϸ���

����������
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
���������
NO
6
YES
4
*/

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

// hh  ��ͷ ��ʼ��Ϊ  0 
// tt  ��β ��ʼ��Ϊ -1 ���ո���ϰ��
// q[] ����

int q[N], tt = -1, hh;

// �Ӷ�β��
void push(int x)
{
    q[++tt] = x;
}

// �п�
bool empty()
{
    return hh > tt; // hh ��ʼΪ 0��tt ��ʼΪ -1
}

// �Ӷ�ͷ��
void pop()
{
    if (!empty()) {
        hh++;
    }
}

// ȥ��ͷ
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
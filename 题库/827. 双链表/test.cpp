/*
ʵ��һ��˫����˫�����ʼΪ�գ�֧�� 5
 �ֲ�����

����������һ������
�����Ҳ����һ������
���� k
 ���������ɾ����
�ڵ� k
 ���������������һ������
�ڵ� k
 ����������Ҳ����һ����
����Ҫ�Ը�������� M
 �β��������������в����󣬴����������������

ע��:��Ŀ�е� k
 ���������������ָ��ǰ����ĵ� k
 �������������������һ�������� n
 ���������ղ����ʱ��˳���� n
 ��������Ϊ���� 1
 ������������� 2
 ��������������� n
 �����������

�����ʽ
��һ�а������� M
����ʾ����������

������ M
 �У�ÿ�а���һ��������������������Ϊ���¼��֣�

L x����ʾ�����������˲����� x
��
R x����ʾ����������Ҷ˲����� x
��
D k����ʾ���� k
 ���������ɾ����
IL k x����ʾ�ڵ� k
 ���������������һ������
IR k x����ʾ�ڵ� k
 ����������Ҳ����һ������
�����ʽ
��һ�У���������������������

���ݷ�Χ
1��M��100000

���в�����֤�Ϸ���

����������
10
R 7
D 1
L 3
IL 2 10
D 3
IL 2 7
L 8
R 9
IL 4 7
IR 2 2
���������
8 7 7 3 2 9
*/

// ��⣺https://www.acwing.com/solution/content/164098/

#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int head, tail, l[N], r[N], e[N], idx;

void init()
{
    head = 0, tail = 1;
    l[1] = 0, r[0] = 1;
    idx = 2;
}

void insert(int k, int x)
{
    e[idx] = x;
    r[idx] = r[k], l[idx] = k;
    l[r[k]] = idx, r[k] = idx++;
}

void erase(int k)
{
    l[r[k]] = l[k];
    r[l[k]] = r[k];
}

int main()
{
    int m;
    cin >> m;
    init();
    while (m--) {
        string s;
        int k, x;
        cin >> s;
        if (s == "L") {
            cin >> x;
            insert(head, x);
        }
        else if (s == "R") {
            cin >> x;
            insert(l[tail], x);
        }
        else if (s == "D") {
            cin >> k;
            erase(k + 1);
        }
        else if (s == "IL") {
            cin >> k >> x;
            insert(l[k + 1], x);
        }
        else {
            cin >> k >> x;
            insert(k + 1, x);
        }
    }

    for (int i = r[0]; i != 1; i = r[i]) {
        cout << e[i] << ' ';
    }
    cout << endl;

    return 0;
}
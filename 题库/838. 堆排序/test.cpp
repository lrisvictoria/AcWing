/*
����һ������Ϊ n
 ���������У���С�������ǰ m
 С������

�����ʽ
��һ�а������� n
 �� m
��

�ڶ��а��� n
 ����������ʾ�������С�

�����ʽ
��һ�У����� m
 ����������ʾ����������ǰ m
 С������

���ݷ�Χ
1��m��n��105
��
1��������Ԫ�ء�109
����������
5 3
4 5 1 3 2
���������
1 2 3
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7876073/

#include <iostream>
#include <algorithm>

using namespace std;

const int N = 100010;

int hp[N], sz, n, m;

// ���µ���
void down(int u)
{
    // ���ף����Һ�������С��һ��
    int t = u;
    // �����Ӳ����� sz ��������С�ڸ���
    if (2 * u <= sz && hp[2 * u] < hp[t]) {
        t = 2 * u;
    }
    // ���Һ��Ӳ����� sz �����Һ��ӱ�������С�� t ��С
    if (2 * u + 1 <= sz && hp[2 * u + 1] < hp[t]) {
        t = 2 * u + 1;
    }
    // ��� t �� u ���ȣ�����Ҫ���µ���
    if (t != u) {
        swap(hp[t], hp[u]);
        // ��ǰ t Ϊ�ոյ���������λ�ã�������� t �Ƿ���Ҫ����
        // �ݹ鴦��
        down(t);
    }
}

int up(int u)
{
    // ���ײ�Ϊ�ٲ��Ҹ��״��ڶ���
    // �ͰѸ��������������ö��Ӵ�λ
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

    // �� 1 λ�ÿ�ʼ
    for (int i = 1; i <= n; i++) {
        cin >> hp[i];
    }
    sz = n;

    // ���µ�������
    for (int i = n / 2; i; i--) {
        down(i);
    }

    // ÿ�δ�ӡ�Ѷ���ɾ��
    // ֮�󽻻��Ѷ��Ͷѵ�Ԫ�أ����� sz -- �����µ���
    for (int i = 1; i <= m; i++) {
        cout << hp[1] << ' ';
        swap(hp[1], hp[sz--]);
        down(1);
    }

    return 0;
}
/*
ʵ��һ�������������ʼΪ�գ�֧�����ֲ�����

������ͷ����һ������
ɾ���� k
 ������������������
�ڵ� k
 ��������������һ������
����Ҫ�Ը�������� M
 �β��������������в����󣬴�ͷ��β�����������

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

H x����ʾ������ͷ����һ���� x
��
D k����ʾɾ���� k
 �������������������� k
 Ϊ 0
 ʱ����ʾɾ��ͷ��㣩��
I k x����ʾ�ڵ� k
 ����������������һ���� x
���˲����� k
 ������ 0
����
�����ʽ
��һ�У������������ͷ��β�����

���ݷ�Χ
1��M��100000

���в�����֤�Ϸ���

����������
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
���������
6 4 6 5
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7852395/


#include <iostream>

using namespace std;

const int N = 100010;

int head, e[N], ne[N], idx;

// ��ʼ��
void init()
{
    head = -1;
    idx = 0;
}

// ͷɾ
void pushFront(int x)
{
    e[idx] = x, ne[idx] = head, head = idx++;
}

// ɾ�� k �ĺ����ڵ�
void popAfterk(int k)
{
    ne[k] = ne[ne[k]];
}

// �� k �����һ���ڵ�
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
            // ͷɾ
            if (!k) {
                head = ne[head]; // �˿�Ϊͷɾ
            } else {
                popAfterk(k - 1); // ɾ������ k - 1 �Ľڵ�ĺ����ڵ�
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
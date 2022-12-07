/*
����һ������Ϊ n ���������У�������������е�����Ե�������

����ԵĶ������£��������еĵ� i ���͵� j ��Ԫ�أ�������� i<j �� a[i]>a[j]������Ϊһ������ԣ������ǡ�

�����ʽ
��һ�а������� n����ʾ���еĳ��ȡ�

�ڶ��а��� n ����������ʾ�������С�

�����ʽ
���һ����������ʾ����Եĸ�����

���ݷ�Χ
1��n��100000��
�����е�Ԫ�ص�ȡֵ��Χ [1,109]��

����������
6
2 3 4 5 6 1
���������
5
*/

#include <iostream>

using namespace std;

const int N = 100000010;

int q[N], tmp[N], n;

long long ReverseOrderPair(int q[], int l, int r)
{
    if (l >= r)
        return 0;

    int mid = l + r >> 1;

    long long res = ReverseOrderPair(q, l, mid) + ReverseOrderPair(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;

    while (i <= mid && j <= r)
    {
        if (q[i] <= q[j])
        {
            tmp[k++] = q[i++];
        }
        else
        {
            res += mid - i + 1;
            tmp[k++] = q[j++];
        }
    }

    while (i <= mid) tmp[k++] = q[i++];
    while (j <= r) tmp[k++] = q[j++];

    for (int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];

    return res;
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> q[i];
    }

    cout << ReverseOrderPair(q, 0, n - 1) << endl;

    return 0;
}
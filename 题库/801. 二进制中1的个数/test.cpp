/*
* ����һ������Ϊ n �����У��������������ÿ�����Ķ����Ʊ�ʾ�� 1 �ĸ�����

�����ʽ
��һ�а������� n��

�ڶ��а��� n ����������ʾ�������С�

�����ʽ
��һ�У����� n �����������еĵ� i ������ʾ�����еĵ� i �����Ķ����Ʊ�ʾ�� 1 �ĸ�����

���ݷ�Χ
1��n��100000,
0��������Ԫ�ص�ֵ��109
����������
5
1 2 3 4 5
���������
1 1 2 1 2
*/

// lowbit 
// 


#include <bits/stdc++.h>

using namespace std;

int lowbit(int x)
{
    return x & -x;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        int x, res = 0;
        cin >> x;
        while (x) {
            x -= lowbit(x);
            res++;
        }
        cout << res << ' ';
    }

    return 0;
}
/*
ĳ�̵�Ŀǰ����������Ϊ k ƿ��

���ֵĽ����۸����£�

���䣺c Ԫ/�䡣ÿ���� n ƿ��
��ƿ��d Ԫ/ƿ��
���ʣ�Ϊ��ʹ�ÿ��������������� n��m ƿ�����̵�������Ҫ���Ѷ���ԪǮ���������֡�

��Ȼ���� k��n��m ʱ�����蹺�����֡�

�����ʽ
��һ�а����������� c,d��

�ڶ��а����������� n,m��

�����а������� k��

�����ʽ
һ����������ʾ���ٻ��ѵĽ�

���ݷ�Χ
ǰ 4 �����Ե����� 1��c,d,n,m,k��10��
���в��Ե����� 1��c,d,n,m,k��100��

��������1��
1 10
7 2
1
�������1��
2
��������2��
2 2
2 1
2
�������2��
0
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7622667/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int c, d, m, n, k;
    cin >> c >> d >> n >> m >> k;

    if (k >= n * m) {
        cout << "0" << endl;
    }
    else {
        int res = 1e8;
        for (int i = 0; i <= m; i++) {
            int total = c * i;
            if (k + n * i < n * m) {
                total += (n * m - n * i - k) * d;
            }
            res = min(res, total);
        }
        cout << res << endl;
    }
    return 0;
}
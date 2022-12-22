/*
���������Ǹ�����������ǰ�� 0�� A��B��������� A/B ���̺�������

�����ʽ
�����У���һ�а������� A���ڶ��а������� B��

�����ʽ
�����У���һ�����������̣��ڶ����������������

���ݷ�Χ
1��A�ĳ��ȡ�100000,
1��B��10000,
B һ����Ϊ 0
����������
7
2
���������
3
1
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Div(vector<int>& A, int b, int& r)
{
    vector<int> C;

    r = 0; // ����
    // 4 3 2 1 ʵ����Ϊ 1 2 3 4
    // ������

    for (int i = A.size() - 1; i >= 0; i--) {
        r = r * 10 + A[i];
        C.push_back(r / b);
        r %= b;
    }

    // ����
    reverse(C.begin(), C.end());

    // ȥǰ��0
    while (C.size() > 1 && C.back() == 0) {
        C.pop_back();
    }

    return C;
}

int main()
{
    string a;
    int b;

    cin >> a >> b;

    vector<int> A;

    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    int r = 0; // ����
    auto C = Div(A, b, r);

    for (int i = C.size() - 1; i >= 0; i--) {
        cout << C[i];
    }

    cout << endl << r << endl;

    return 0;
}
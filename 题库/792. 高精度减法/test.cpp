/*
��������������������ǰ�� 0�����������ǵĲ����������Ϊ������

�����ʽ
�����У�ÿ�а���һ��������

�����ʽ
��һ�У���������Ĳ

���ݷ�Χ
1���������ȡ�105
����������
32
11
���������
21
*/

#include <iostream>
#include <vector>

using namespace std;

bool cmp(vector<int>& A, vector<int>& B)
{
    // ��� A ��λ��С�ڻ���� B ��λ��
    if (A.size() != B.size()) {
        return A.size() > B.size();
    }

    // A ��λ������ B ��λ��
    for (int i = A.size() - 1; i >= 0; i--) {
        if (A[i] != B[i]) {
            return A[i] > B[i];
        }
    }

    // ��ʱ A == B
    return true;
}

vector<int> Sub(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    // ��λ
    int t = 0;
    // ��ʱ A ��λ���� ���� B ��λ����
    // 5 4 3 2 1
    // 1 2 3
    for (int i = 0; i < A.size(); i++) {
        t += A[i];
        if (i < B.size()) {
            t -= B[i];
        }
        // ����������Ϊ���� % 10 ���Եõ� 0~9 ��λ��
        // ��ʱ����Ҫ��λ��
        C.push_back((t + 10) % 10);
        // ��� t < 0 ˵��Ҫ��λ
        if (t < 0) {
            t = -1;
        }
        else {
            t = 0;
        }
    }

    // 321
    // 021
    // �������Ϊ 300, ȥ��ǰ��0
    while (C.size() > 1 && C.back() == 0) {
        C.pop_back();
    }
    return C;
}

int main()
{
    string a, b;
    vector<int> A, B;

    cin >> a >> b;

    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i--) {
        B.push_back(b[i] - '0');
    }

    // ��� A >= B ��������������Ϊ��
    if (cmp(A, B)) {
        auto C = Sub(A, B);
        for (int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }
    }
    else {
        auto C = Sub(B, A);
        cout << "-";
        for (int i = C.size() - 1; i >= 0; i--) {
            cout << C[i];
        }
    }

    return 0;
}
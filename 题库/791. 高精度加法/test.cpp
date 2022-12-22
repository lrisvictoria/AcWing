/*
��������������������ǰ�� 0�����������ǵĺ͡�

�����ʽ
�����У�ÿ�а���һ��������

�����ʽ
��һ�У���������ĺ͡�

���ݷ�Χ
1���������ȡ�100000
����������
12
23
���������
35
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> Add(vector<int>& A, vector<int>& B)
{
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size() || i < B.size(); i++) {
        // ��� i ��ǰλ��С�� A �� B ����󳤶ȣ������
        if (i < A.size()) {
            t += A[i];
        }
        if (i < B.size()) {
            t += B[i];
        }
        C.push_back(t % 10);
        t /= 10;
    }
    if (t) {
        C.push_back(1);
    }
    return C;
}

int main()
{
    // �����ִ��� string ��
    string a, b;
    vector<int> A, B;

    cin >> a >> b;

    // �� string �е��Ŵ���
    // 1 2 3 4 5
    // 5 4 3 2 1
    for (int i = a.size() - 1; i >= 0; i--) {
        A.push_back(a[i] - '0');
    }

    for (int i = b.size() - 1; i >= 0; i--) {
        B.push_back(b[i] - '0');
    }

    auto C = Add(A, B);

    for (int i = C.size() - 1; i >= 0; i--) {
        cout << C[i];
    }

    return 0;
}
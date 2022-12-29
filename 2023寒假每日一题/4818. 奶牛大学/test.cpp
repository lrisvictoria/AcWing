/*
Farmer John �ƻ�Ϊ��ţ���¿���һ����ѧ��

�� N ͷ��ţ���ܻ���ѧ��

ÿͷ��ţ���Ը��֧�� ci ��ѧ�ѡ�

Farmer John �����趨������ţ��ѧ��Ҫ֧����ѧ�ѡ�

������ѧ�Ѵ���һͷ��ţԸ��֧������߽���ô��ͷ��ţ�Ͳ�����ѧ��

Farmer John ��׬�����ܶ��Ǯ���Ӷ����Ը����Ľ�ʦ�ṩһ�ʿɹ۵Ĺ��ʡ�

���������׬����Ǯ���������Լ���ʱӦ����ȡ����ѧ�ѡ�

�����ʽ
����ĵ�һ�а��� N��

�ڶ��а��� N ������ c1,c2,��,cN������ ci ����ţ i Ը��֧�������ѧ�ѽ�

�����ʽ
��� Farmer John ����׬����������Լ������������Ӧ����ȡ��ѧ�ѡ�����ж���⣬�����ȡѧ����С�Ľ⡣

ע����������漰��������������Ҫʹ�� 64 λ�����ͣ����磬Java �е� ��long����C/C++ �е� ��long long������

���ݷ�Χ
1��N��105,
1��ci��106��

����������
4
1 6 4 6
���������
12 4
��������
��� Farmer John �շ� 4����ô 3 ͷ��ţ������ѧ���Ӷ�ʹ��׬ȡ 3��4=12 �Ľ�
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7585625/

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int N = 100010;

int a[N], n;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // �������������
    sort(a, a + n);

    // tuition - ���ѧ��
    // maxnum  - �������ѧ��ʱ����ţԭ��֧���Ľ��
    // cnt     - ��ǰ�ܸ�����ѧ�ѵ���ţ��
    // money   - ��ǰλ�õ�ѧ��
    ll tuition = 0, maxnum = 0;
    for (ll i = n - 1, cnt = 1; i >= 0; i--, cnt++) {
        ll money = cnt * a[i];
        // ��ǰλ�õ���ѧ�Ѵ��ڵ������ѧ�ѣ������
        if (money >= tuition) {
            maxnum = a[i];
            tuition = money;
        }
    }

    cout << tuition << " " << maxnum << endl;

    return 0;
}
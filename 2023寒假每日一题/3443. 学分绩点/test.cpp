/*
������ѧ�Ա������ĳɼ�ʩ��ƽ��ѧ�ּ����ƣ�GPA����

�Ƚ�ѧ����ʵ�ʿ��ָ��ݲ�ͬ��ѧ�ƵĲ�ͬѧ�ְ�һ���Ĺ�ʽ���м��㡣

��ʽ���£�

ʵ�ʳɼ�     ����
90����100     4.0
85����89      3.7
82����84      3.3
78����81      3.0
75����77      2.7
72����74      2.3
68����71      2.0
64����67      1.5
60����63      1.0
60����        0
һ�ſγ̵�ѧ�ּ��� = �ÿμ��� �� �ÿ�ѧ��

�������� = ����ѧ��ѧ�ּ���֮�� / ���пγ�ѧ��֮��

��Ҫ�����д�������ĳ�� A ���������㣨GPA����

�����ʽ
��һ�У��ܵĿγ��� n��

�ڶ��У���Ӧ�γ̵�ѧ�֣�����ѧ�ּ��ÿո��������

�����У���Ӧ�γ̵�ʵ�ʵ÷֣�

�˴�������������־�Ϊ������

�����ʽ
�����һ�У��������㣬��ȷ��С����� 2 λС����

���ݷ�Χ
1��n��10,
ѧ��ȡֵ��Χ [1,10],
�γ̵÷ַ�Χ [0,100]��

����������
5
4 3 4 2 3
91 88 72 69 56
���������
2.52
*/

// ��⣺https://www.acwing.com/file_system/file/content/whole/index/content/7582156/

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 10;

/*
* n   ѧ����
* sum ѧ�ֺ�
* a[] ���ÿ��ѧ��
* x   �γ�ʵ�ʵ÷�
* res ��������
*/

int n, sum, a[N], x;
double res;

double sc(int x)
{
    if (x >= 90 && x <= 100) return 4.0;
    else if (x >= 85 && x <= 89) return 3.7;
    else if (x >= 82 && x <= 85) return 3.3;
    else if (x >= 78 && x <= 81) return 3.0;
    else if (x >= 75 && x <= 77) return 2.7;
    else if (x >= 72 && x <= 74) return 2.3;
    else if (x >= 68 && x <= 71) return 2.0;
    else if (x >= 64 && x <= 67) return 1.5;
    else if (x >= 60 && x <= 63) return 1.0;
    else return 0.0;
}

int main()
{
    cin >> n;

    // ��ѧ�ֺ�
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // ��ѧ�ּ���֮��
    for (int i = 0; i < n; i++) {
        cin >> x;
        res += sc(x) * a[i];
    }

    // ��� ѧ�ּ���֮�� / ѧ�ֺ�
    cout << fixed << setprecision(2) << res / sum << endl;

    return 0;
}
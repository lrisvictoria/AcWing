#define _CRT_SECURE_NO_WARNINGS 1 

/*
��ȡ 4 ������ N1,N2,N3,N4���� 4 �����ֶ��Ǳ��� 1 λС���ĸ���������Ӧ��ѧ����õ� 4 ��������

�� 4 ��������Ȩ�طֱ�Ϊ 2,3,4,1���������ѧ���ɼ���ƽ��ֵ X ����� Media: X��

��������Ϊ�������������

���ƽ��ֵΪ 7.0 ����ߣ������ Aluno aprovado.��
���ƽ��ֵС�� 5.0������� Aluno reprovado.��
���ƽ��ֵ���ڵ��� 5.0 ����С�� 7.0������� Aluno em exame.�����ٶ�ȡһ������ Y��Ȼ����� Nota do exame: Y��
���������¼���ƽ��ֵ Z=(X+Y)/2����� Z ���ڻ���� 5.0������� Aluno aprovado.��������� Aluno reprovado.��
������ Media final: Z����ʾѧ�������ճɼ���
�����ʽ
�����а����ĸ�����������ʾѧ�����ĸ��ɼ���

Ҳ�в���������� 3 �����ݣ������һ����������

�����ʽ
����Ľ�������� 1 λС����������ʽ������Ŀ���������������

���ݷ�Χ
0���������ݡ�10.0
��������1��
2.0 4.0 7.5 8.0
6.4
�������1��
Media: 5.4
Aluno em exame.
Nota do exame: 6.4
Aluno aprovado.
Media final: 5.9
��������2��
2.0 6.6 4.0 9.0
�������2��
Media: 4.9
Aluno reprovado.
��������3��
9.0 4.0 8.5 9.0
�������3��
Media: 7.3
Aluno aprovado.
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double x = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
    printf("Media: %.1lf\n", x);

    if (x >= 7) cout << "Aluno aprovado." << endl;
    else if (x < 5) cout << "Aluno reprovado." << endl;
    else
    {
        cout << "Aluno em exame." << endl;
        double y;
        cin >> y;
        printf("Nota do exame: %.1lf\n", y);
        double z = (x + y) / 2;
        if (z >= 5) cout << "Aluno aprovado." << endl;
        else cout << "Aluno reprovado." << endl;
        printf("Media final: %.1lf\n", z);
    }

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1 

/*
�����������������ﵥ�ʣ���Щ�ʽ������±�����Ҷ���һ�����

����ȷ������������������ơ�

UOJ_1049_b.png

�����ʽ
�����ϱ���������������ʣ�ÿ��һ��������ʶ���������Сд��ĸ���ɡ�

�����ʽ
���ʶ����Ķ�������ơ�

����������
vertebrado
mamifero
onivoro
���������
homem
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char arr1[20], arr2[20], arr3[20];
    cin >> arr1 >> arr2 >> arr3;

    if (strcmp(arr1, "vertebrado") == 0)
    {
        if (strcmp(arr2, "ave") == 0)
        {
            if (strcmp(arr3, "carnivoro") == 0) cout << "aguia" << endl;
            else cout << "pomba" << endl;
        }
        else
        {
            if (strcmp(arr3, "onivoro") == 0) cout << "homem" << endl;
            else cout << "vaca" << endl;
        }
    }
    else
    {
        if (strcmp(arr2, "inseto") == 0)
        {
            if (strcmp(arr3, "hematofago") == 0) cout << "pulga" << endl;
            else cout << "lagarta" << endl;
        }
        else
        {
            if (strcmp(arr3, "hematofago") == 0) cout << "sanguessuga";
            else cout << "minhoca" << endl;
        }
    }

    return 0;
}
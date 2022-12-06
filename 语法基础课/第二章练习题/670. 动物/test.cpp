#define _CRT_SECURE_NO_WARNINGS 1 

/*
给定你三个葡萄牙语单词，这些词将根据下表从左到右定义一个动物。

请你确定并输出这个动物的名称。

UOJ_1049_b.png

输入格式
根据上表，输入包含三个单词，每行一个，用以识别动物，单词由小写字母构成。

输出格式
输出识别出的动物的名称。

输入样例：
vertebrado
mamifero
onivoro
输出样例：
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
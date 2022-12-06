#define _CRT_SECURE_NO_WARNINGS 1 

/*
ABC 公司决定给员工加薪，加薪情况如下所示：

    薪水                涨薪幅度
0 - 400.00                15%
400.01 - 800.00           12%
800.01 - 1200.00          10%
1200.01 - 2000.00         7%
超过 2000.00              4%
读取员工的工资，计算并输出员工的新工资，以及员工增加的收入和涨薪幅度。

输入格式
共一行，包含一个保留两位小数的浮点数。

输出格式
输出格式如下所示：

第一行输出 Novo salario: X，X 表示员工新工资，保留两位小数。

第二行输出 Reajuste ganho: Y，Y 表示员工增加的具体收入数值，保留两位小数。

第三行输出 Em percentual: Z，Z 表示涨薪幅度，注意用百分比表示。

数据范围
0≤原工资≤2500.00
输入样例：
400.00
输出样例：
Novo salario: 460.00
Reajuste ganho: 60.00
Em percentual: 15 %
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double salary;
    cin >> salary;

    double x; // 百分比

    if (salary >= 0 && salary <= 400) x = 0.15;
    else if (salary > 400 && salary <= 800) x = 0.12;
    else if (salary > 800 && salary <= 1200) x = 0.10;
    else if (salary > 1200 && salary <= 2000) x = 0.07;
    else x = 0.04;

    printf("Novo salario: %.2lf\n", salary + (x * salary));
    printf("Reajuste ganho: %.2lf\n", salary * x);
    printf("Em percentual: %.0lf %%\n", x * 100);


    return 0;
}
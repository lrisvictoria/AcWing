#define _CRT_SECURE_NO_WARNINGS 1 

/*
某商店出售 5 种零食，零食编号为 1∼5。

5 种零食的价目表如下所示：

零食种类        价格
零食  1         R$ 4.00
零食  2         R$ 4.50
零食  3         R$ 5.00
零食  4         R$ 2.00
零食  5         R$ 1.50
现在给定某种零食的编号和数量，请你计算总价值是多少。

输入格式
输入包含两个整数 x 和 y，其中 x 为零食编号，y 为零食数量。

输出格式
输出格式为 Total: R$ X，其中 X 为总价值，保留两位小数。

数据范围
1≤x≤5,
1≤y≤100
输入样例：
3 2
输出样例：
Total: R$ 10.00
*/

#include <cstdio>

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    if (x == 1) printf("Total: R$ %.2lf\n", y * 4.00);
    else if (x == 2) printf("Total: R$ %.2lf\n", y * 4.50);
    else if (x == 3) printf("Total: R$ %.2lf\n", y * 5.00);
    else if (x == 4) printf("Total: R$ %.2lf\n", y * 2.00);
    else printf("Total: R$ %.2lf\n", y * 1.50);

    return 0;
}
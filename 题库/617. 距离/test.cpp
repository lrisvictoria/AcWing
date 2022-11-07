#define _CRT_SECURE_NO_WARNINGS 1 

/*
两辆汽车在同一地点，同时，沿同一方向前进。

一辆车的速度为 60 km/h，另一辆车的速度为 90 km/h。

显然，快车与慢车的距离会不断拉开，每过一个小时（60 分钟），两车的距离就拉开 30 公里。

现在，告诉你两车之间的距离为 L 公里，请你求出两车已经行驶了多长时间？

输入格式
输入包含一个整数 L，表示两车之间的距离。

输出格式
输出格式为 X minutos，其中 X 为已经行驶的时间，单位为分钟。

数据范围
1≤L≤109
输入样例：
30
输出样例：
60 minutos
*/

#include <iostream>

using namespace std;

int main()
{
    int L;
    cin >> L;

    cout << 2 * L << " minutos" << endl;

    return 0;
}
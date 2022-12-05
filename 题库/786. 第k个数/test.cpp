/*
给定一个长度为 n 的整数数列，以及一个整数 k，请用快速选择算法求出数列从小到大排序后的第 k 个数。

输入格式
第一行包含两个整数 n 和 k。

第二行包含 n 个整数（所有整数均在 1∼109 范围内），表示整数数列。

输出格式
输出一个整数，表示数列的第 k 小数。

数据范围
1≤n≤100000,
1≤k≤n
输入样例：
5 3
2 4 1 5 3
输出样例：
3
*/

#include <iostream>

using namespace std;

const int N = 100010;

int q[N], n, k;

int FindK(int q[], int l, int r, int k)
{
	if (l >= r)
		return q[k];

	int key = q[l + r >> 1], i = l - 1, j = r - 1;
	while (i < j)
	{
		while (q[++i] < key) ;
		while (q[--j] > key) ;
		if (i < j)
			swap(q[i], q[j]);
	}

	if (k <= j)
		FindK(q, l, j, k);
	else
		FindK(q, j + 1, r, k);
}

int main()
{
	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> q[i];
	}

	// 求第 K 个数就是求第 k - 1 下标的数
	cout << FindK(q, 0, n - 1, k - 1) << endl;

	return 0;
}
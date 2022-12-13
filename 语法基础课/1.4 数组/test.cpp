#include <iostream>
#include <algorithm>

using namespace std;

// 逗号表达式运用
//int a = 1, b = 2;
//
//int fuc()
//{
//	return a, a + b;
//}
//
//int main()
//{
//	printf("%d\n", fuc());
//
//
//	return 0;
//}

/*
* reverse 在 std 标准库，头文件为 algorithm
* 其使用的模板类似于：
* template <class BidirectionalIterator>
  void reverse (BidirectionalIterator first, BidirectionalIterator last)
{
		while ((first!=last)&&(first!=--last)) {
		std::iter_swap (first,last);
		++first;
  }
}
* 
* 是对字符串进行翻转的一个函数，函数是开区间：[q, q + k)
* q是数组名或指针或地址
* 
* [firse, last)
* 第一个，最后一个
* 双向迭代器到要反转的序列的初始和最终位置。使用的范围是[first，last)，
* 它包含first和last之间的所有元素，包括first指向的元素，但不包括last指向的元素。
* 双向迭代器应指向正确定义了swap的类型。
*/

//int main()
//{
//	int q[] = { 1, 2, 3, 4, 5 };
//
//	// 三步翻转法实例
//	reverse(q, q + 2); // [0, 1]
//	reverse(q + 2, q + 5); // [2, 4]
//	reverse(q, q + 5); // [0, 4]
//
//	for (int i = 0; i < 5; i++) cout << q[i] << " ";
//
//	return 0;
//}

// 高精度二次幂

//#include <iostream>
//
//using namespace std;
//
//const int N = 3010;
//
//int main()
//{
//	int q[N] = { 1 };
//
//	int n;
//	cin >> n;
//
//	int m = 1; // 位数
//
//	for (int i = 0; i < n; i++)
//	{
//		int t = 0; // 进位
//		// 当前位数为 1
//		for (int j = 0; j < m; j++)
//		{
//			t += 2 * q[j];
//			q[j] = t % 10;
//			t /= 10;
//		}
//		// 如果满足进位条件，则将下一位调整为 1 ，并且将 m 自增
//		if (t) q[m++] = 1;
//	}
//
//	for (int i = m - 1; i >= 0; i--) cout << q[i] << " ";
//
//	return 0;
//}

#include <iostream>

using namespace std;

int main()
{
	int a[1][1][1][1][1][1][1][1][1] = { 0 };

	cout << a[0][0][0][0][0][0][0][0][0] << endl;

	return 0;
}
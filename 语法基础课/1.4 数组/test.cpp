#include <iostream>
#include <algorithm>

using namespace std;

// ���ű��ʽ����
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
* reverse �� std ��׼�⣬ͷ�ļ�Ϊ algorithm
* ��ʹ�õ�ģ�������ڣ�
* template <class BidirectionalIterator>
  void reverse (BidirectionalIterator first, BidirectionalIterator last)
{
		while ((first!=last)&&(first!=--last)) {
		std::iter_swap (first,last);
		++first;
  }
}
* 
* �Ƕ��ַ������з�ת��һ�������������ǿ����䣺[q, q + k)
* q����������ָ����ַ
* 
* [firse, last)
* ��һ�������һ��
* ˫���������Ҫ��ת�����еĳ�ʼ������λ�á�ʹ�õķ�Χ��[first��last)��
* ������first��last֮�������Ԫ�أ�����firstָ���Ԫ�أ���������lastָ���Ԫ�ء�
* ˫�������Ӧָ����ȷ������swap�����͡�
*/

//int main()
//{
//	int q[] = { 1, 2, 3, 4, 5 };
//
//	// ������ת��ʵ��
//	reverse(q, q + 2); // [0, 1]
//	reverse(q + 2, q + 5); // [2, 4]
//	reverse(q, q + 5); // [0, 4]
//
//	for (int i = 0; i < 5; i++) cout << q[i] << " ";
//
//	return 0;
//}

// �߾��ȶ�����

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
//	int m = 1; // λ��
//
//	for (int i = 0; i < n; i++)
//	{
//		int t = 0; // ��λ
//		// ��ǰλ��Ϊ 1
//		for (int j = 0; j < m; j++)
//		{
//			t += 2 * q[j];
//			q[j] = t % 10;
//			t /= 10;
//		}
//		// ��������λ����������һλ����Ϊ 1 �����ҽ� m ����
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
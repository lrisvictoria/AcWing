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

int main()
{
	int q[] = { 1, 2, 3, 4, 5 };

	// ������ת��ʵ��
	reverse(q, q + 2); // [0, 1]
	reverse(q + 2, q + 5); // [2, 4]
	reverse(q, q + 5); // [0, 4]

	for (int i = 0; i < 5; i++) cout << q[i] << " ";

	return 0;
}
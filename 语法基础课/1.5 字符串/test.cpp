#include <iostream>
#include <string>

using namespace std;

//using namespace std;
//
//int main()
//{
//	char a1[] = { 'C', '+', '+' };
//	char a2[4] = { 'C', '+', '+' , '\0'};
//
//	cout << a1 << endl;
//
//
//	return 0;
//}


//int main()
//{
//	string name;
//
//	getline(cin, name);
//
//	puts("hello world");
//
//	return 0;
//}

//int main()
//{
//	string s;
//
//	// �޷���ȡ���ַ�
//	// cin >> s;
//
//	// ���� string �࣬�޷�ʹ�� scanf
//	// scanf("%s", s);
//
//	// ���ǿ���ʹ�� printf
//
//	cin >> s;
//
//	// c_str �������Է��� s ����ʼ��ַ
//	printf("%s\n", s.c_str());
//	puts(s.c_str());
//
//	cout << s << endl;
//
//	return 0;
//}


// �ַ����� �� string ���ȡһ���еķ�ʽ

//int main()
//{
//	string s1;
//
//	getline(cin, s1);
//
//	char arr[100];
//
//	// �Ὣ \n Ҳ����
//	fgets(arr, 101, )
//
//	return 0;
//}

//int main()
//{
//	string s;
//
//	// ����Ƿ�Ϊ 0
//	cout << s.empty() << endl;
//
//	cin >> s;
//
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//
//	return 0;
//}

//int main()
//{
//	string s1;
//	string s2;
//
//	cin >> s1 >> s2;
//
//	string s3 = s1 + s2;
//
//	if (s1 > s2) cout << "s1 > s2" << endl;
//	else if (s1 < s2) cout << "s1 < s2" << endl;
//	else cout << "s1 == s2" << endl;
//
//	cout << s3 << endl;
//
//	// s3 = s3 + "is great" + '!';
//
//	s3 = "is great";
//
//	cout << s3 << endl;
//
//	return 0;
//}

// string ��ĳ�ʼ��

//int main()
//{
//	string s1;
//
//	string s2 = s1;
//
//	string s3 = "hiya";
//
//	string s4(10, 'c'); // ��ʮ���ֽ�����Ϊ cc cc cc cc cc
//}

int main()
{
	string s = "hello world";

	// �����ַ����鴦��
	//for (int i = 0; i < s.size(); i++) cout << s[i] << endl;

	// ��Χ for ѭ��
	// for (char c : s) cout << c << endl;
	// for (auto c : s) cout << c << endl;

	// auto Ϊ�²�ֵ�����������ͼ���Ψһʱ������ʹ��

	// ����ʾ��
	// ������Ϊ�ַ�����
	/*auto name = "anduin";

	cout << name.size() << endl;*/

	// c �൱��
	/*for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		cout << c << endl;
	}*/

	// �޸� c �����ܸı�ֵ

	// �������� & �Ϳ�����

	char s1[] = "anduinanduin";
	int cnt = 0;

	for (auto& c : s)
	{
		c = s1[cnt++];
		cout << c << endl;
	}

	return 0;
}

//int main()
//{
//	string s1;
//	string s2;
//
//	cin >> s1 >> s2;
//
//	// ����Ҳ����
//	string s3 = "hello" + " world" + s1;
//		 
//	return 0;
//}
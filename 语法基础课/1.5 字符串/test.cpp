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
//	// 无法读取空字符
//	// cin >> s;
//
//	// 对于 string 类，无法使用 scanf
//	// scanf("%s", s);
//
//	// 但是可以使用 printf
//
//	cin >> s;
//
//	// c_str 函数可以返回 s 的起始地址
//	printf("%s\n", s.c_str());
//	puts(s.c_str());
//
//	cout << s << endl;
//
//	return 0;
//}


// 字符数组 或 string 类读取一整行的方式

//int main()
//{
//	string s1;
//
//	getline(cin, s1);
//
//	char arr[100];
//
//	// 会将 \n 也读入
//	fgets(arr, 101, )
//
//	return 0;
//}

//int main()
//{
//	string s;
//
//	// 检查是否为 0
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

// string 类的初始化

//int main()
//{
//	string s1;
//
//	string s2 = s1;
//
//	string s3 = "hiya";
//
//	string s4(10, 'c'); // 将十个字节内容为 cc cc cc cc cc
//}

int main()
{
	string s = "hello world";

	// 当做字符数组处理
	//for (int i = 0; i < s.size(); i++) cout << s[i] << endl;

	// 范围 for 循环
	// for (char c : s) cout << c << endl;
	// for (auto c : s) cout << c << endl;

	// auto 为猜测值，当数据类型几乎唯一时，可以使用

	// 错误示范
	// 被解析为字符数组
	/*auto name = "anduin";

	cout << name.size() << endl;*/

	// c 相当于
	/*for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		cout << c << endl;
	}*/

	// 修改 c 并不能改变值

	// 加上引用 & 就可以了

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
//	// 这样也不行
//	string s3 = "hello" + " world" + s1;
//		 
//	return 0;
//}
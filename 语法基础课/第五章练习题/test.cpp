// 760

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    int cnt = 0;
//
//    getline(cin, s);
//
//    for (auto c : s)
//    {
//        cnt++;
//    }
//
//    cout << cnt << endl;
//
//    return 0;
//}

// 761

//#include <iostream>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    int cnt = 0;
//
//    getline(cin, s);
//
//    for (int i = 0; s[i]; i++)
//        if (isdigit(s[i])) cnt++;
//
//    cout << cnt << endl;
//
//    return 0;
//}

// 763

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int t;
//    string s1, s2;
//
//    cin >> t;
//
//    while (t--)
//    {
//        cin >> s1 >> s2;
//
//        int x = 0, y = 0;
//
//        if (s1 == "Hunter") x = 0;
//        else if (s1 == "Bear") x = 1;
//        else x = 2;
//
//        if (s2 == "Hunter") y = 0;
//        else if (s2 == "Bear") y = 1;
//        else y = 2;
//
//        if (x == y) cout << "Tie" << endl;
//        else if ((x + 1) % 3 == y) cout << "Player2" << endl;
//        else cout << "Player1" << endl;
//    }
//
//    return 0;
//}

// 765

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s1;
//    string s2;
//
//    getline(cin, s1);
//
//    for (auto c : s1)
//    {
//        s2 = s2 + c + ' ';
//    }
//
//    // 删除最后一个空格，无伤大雅
//    s2.pop_back();
//
//    cout << s2 << endl;
//
//    return 0;
//}

// 769 

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//    char ch;
//
//    getline(cin, s);
//
//    cin >> ch;
//
//    for (auto& c : s)
//    {
//        if (c == ch) c = '#';
//        cout << c;
//    }
//
//    return 0;
//}

// 773

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string str, substr;
//
//    while (cin >> str >> substr)
//    {
//        int pos = 0;
//
//        for (int i = 1; i < str.size(); i++)
//        {
//            if (str[i] > str[pos])
//                pos = i;
//        }
//
//        cout << str.substr(0, pos + 1) + substr + str.substr(pos + 1) << endl;
//    }
//
//    return 0;
//}

// 772

//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int cnt[26];
//char str[100010];
//
//int main()
//{
//    cin >> str;
//
//    int len = strlen(str);
//
//    for (int i = 0; i < len; i++)
//    {
//        cnt[str[i] - 'a']++;
//    }
//
//    for (int i = 0; i < len; i++)
//    {
//        if (cnt[str[i] - 'a'] == 1)
//        {
//            cout << str[i] << endl;
//            return 0;
//        }
//    }
//
//    cout << "no" << endl;
//
//    return 0;
//}

// 762

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s1;
//    string s2;
//
//    getline(cin, s1);
//
//    for (auto c : s1)
//    {
//        s2 = s2 + c + ' ';
//    }
//
//     删除最后一个空格，无伤大雅
//    s2.pop_back();
//
//    cout << s2 << endl;
//
//    return 0;
//}

// 768

//#include <iostream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//    string a, b;
//
//    getline(cin, a);
//    getline(cin, b);
//
//    for (auto& x : a)
//    {
//        x = tolower(x);
//    }
//
//    for (auto& y : b)
//    {
//        y = tolower(y);
//    }
//
//    if (a > b) cout << ">" << endl;
//    else if (a < b) cout << "<" << endl;
//    else cout << "=" << endl;
//
//    return 0;
//}


// 766

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    string a, b;
//
//    getline(cin, a);
//
//    for (int i = 0; a[i + 1]; i++) {
//        if (a[i] == ' ') {
//            b = b + ' ';
//            while (a[i + 1] == ' ') {
//                i += 1;
//            }
//        }
//        else {
//            b = b + a[i];
//        }
//    }
//
//
//    if (a[a.size() - 1] != ' ') {
//        b = b + a[a.size() - 1];
//    }
//
//    cout << b << endl;
//
//    return 0;
//}


// 767

//#include <iostream>
//#include <string>
//#include <cctype>
//
//using namespace std;
//
//int main()
//{
//    string str;
//
//    getline(cin, str);
//
//    for (auto& x : str) {
//        if (islower(x)) {
//            // ((z -> 122 - 97) + 1) % 26 + 'a'
//            // 先转换为数字再转换为字母
//            x = (x - 'a' + 1) % 26 + 'a';
//        }
//        else if (isupper(x)) {
//            x = (x - 'A' + 1) % 26 + 'A';
//        }
//    }
//
//    cout << str << endl;
//
//    return 0;
//}

// 764

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string a, b;
//
//    getline(cin, a);
//
//    for (int i = 0; i < a.size() - 1; i++) {
//        char tmp = a[i] + a[i + 1];
//        b = b + tmp;
//    }
//
//    b += a[a.size() - 1] + a[0];
//
//    cout << b << endl;
//
//    return 0;
//}

// 770

//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int main()
//{
//    string str, a, b;
//
//    getline(cin, str);
//    cin >> a >> b;
//
//    stringstream ssin(str);
//
//    while (ssin >> str) {
//        if (str == a) {
//            cout << b << " ";
//        }
//        else {
//            cout << str << " ";
//        }
//    }
//
//    return 0;
//}

// 771

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    string str;
//
//    cin >> n;
//
//    while (n--) {
//        cin >> str;
//
//        int cnt = 0;
//        char ch;
//
//        for (int i = 0; i < str.size(); i++) {
//            int j = i;
//            while (j < str.size() && str[j] == str[i]) {
//                j++;
//            }
//            // i 下次会自增
//            if (j - i > cnt) {
//                cnt = j - i;
//                ch = str[i];
//            }
//            i = j - 1;
//        }
//        cout << ch << " " << cnt << endl;
//    }
//
//    return 0;
//}

// 774

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string str, max;
//    int cnt = 0;
//
//    while (cin >> str) {
//        if (str.back() == '.') {
//            str.pop_back();
//        }
//
//        if (str.size() > cnt) {
//            cnt = str.size();
//            max = str;
//        }
//    }
//
//    cout << max << endl;
//
//    return 0;
//}

// 775

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s[100];
//
//    int cnt = 0;
//
//    while (cin >> s[cnt]) cnt++;
//
//    for (int i = cnt - 1; i >= 0; i--) cout << s[i] << " ";
//
//    return 0;
//}

// 776

//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    string a, b;
//
//    cin >> a >> b;
//
//    if (a.size() < b.size()) {
//        swap(a, b);
//    }
//
//    for (int i = 0; i < a.size(); i++) {
//        // 将 a 翻转一步
//        a = a.substr(1) + a[0];
//        for (int j = 0; j + b.size() <= a.size(); j++) {
//            int k = 0;
//            for (k = 0; k < b.size(); k++) {
//                if (a[j + k] != b[k]) {
//                    break;
//                }
//            }
//            if (k == b.size()) {
//                cout << "true" << endl;
//                return 0;
//            }
//        }
//    }
//
//    cout << "false" << endl;
//
//    return 0;
//}

// 777

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s;
//
//    while (cin >> s, s != ".") {
//        int len = s.size();
//
//        // 乘方至少为 1
//        for (int i = len; i > 0; i--) {
//            if (len % i == 0) {
//                int cnt = len / i;
//
//                string tmp = s.substr(0, cnt);
//                string res; // 作为截取后拼接的结果
//
//                for (int j = 0; j < i; j++) {
//                    res += tmp;
//                }
//                if (res == s) {
//                    cout << i << endl;
//                    break;
//                }
//            }
//        }
//    }
//
//    return 0;
//}

// 778

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    string s, s1, s2;
//    char c;
//
//    while (cin >> c && c != ',') {
//        s += c;
//    }
//
//    while (cin >> c && c != ',') {
//        s1 += c;
//    }
//
//    while (cin >> c && c != ',') {
//        s2 += c;
//    }
//
//    if (s1.size() > s.size() || s2.size() > s.size()) {
//        cout << "-1" << endl;
//        return 0;
//    }
//
//    int l = 0;
//    while (l + s1.size() <= s.size()) {
//        int k = 0;
//        while (k < s1.size()) {
//            if (s[l + k] != s1[k]) {
//                break;
//            }
//            k++;
//        }
//        if (k == s1.size()) {
//            break;
//        }
//        l++;
//    }
//
//    int r = s.size() - s2.size();
//    while (r >= 0) {
//        int k = 0;
//        while (k < s2.size()) {
//            if (s[r + k] != s2[k]) {
//                break;
//            }
//            k++;
//        }
//        if (k == s2.size()) {
//            break;
//        }
//        r--;
//    }
//
//    l += s1.size() - 1;
//
//    if (l >= r) {
//        cout << "-1" << endl;
//    }
//    else {
//        cout << r - l - 1 << endl;
//    }
//
//    return 0;
//}

// 779

#include <iostream>
#include <climits>

using namespace std;

const int N = 200;

string str[N];

int main()
{
    int n;

    while (cin >> n, n) {
        int len = INT_MAX;
        // 将 len 更新为最短字符串的大小
        for (int i = 0; i < n; i++) {
            cin >> str[i];
            if (len > str[i].size()) {
                len = str[i].size();
            }
        }

        while (len) {
            bool is_success = true;
            // 将其他字符串和第一个字符串作比较
            for (int i = 1; i < n; i++) {
                bool is_same = true;
                for (int j = i; j <= len; j++) {
                    // 后缀可能为空格
                    if (str[i][str[i].size() - j] != str[0][str[0].size() - j]) {
                        is_same = false;
                        break;
                    }
                }
                if (!is_same) {
                    is_success = false;
                    break;
                }
            }
            if (is_success) {
                break;
            }
            else {
                len--;
            }
        }
        cout << str[0].substr(str[0].size() - len) << endl;
    }

    return 0;
}
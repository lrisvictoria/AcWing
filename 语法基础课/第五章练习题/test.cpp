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
//    cin >> a >> b;
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
//    if (a > b) 
//        cout << ">" << endl;
//    else if (a < b) 
//        cout << "<" << endl;
//    else 
//        cout << "=" << endl;
//
//    return 0;
//}

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;

    getline(cin, str);

    for (int i = 0; str[i]; i++) {
        if (islower(str[i])) {
            str[i] = (str[i] + 1) % ('z' + 1);
        }
        else if (isupper(str[i])) {
            str[i] = (str[i] + 1) % ('Z' + 1);
        }
    }

    cout << str << endl;

    return 0;
}
// 737. 数组替换

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int q[10];
//
//    for (int i = 0; i < 10; i++)
//    {
//        cin >> q[i];
//        if (q[i] <= 0) q[i] = 1;
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "X[" << i << "] = " << q[i] << endl;
//    }
//
//    return 0;
//}

// 738. 数组填充

//#include <iostream>
//
//using namespace std;
//
//int q[10];
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    for (int i = 0; i < 10; i++)
//    {
//        if (i == 0) q[i] = n;
//        else q[i] = 2 * q[i - 1];
//    }
//
//    for (int i = 0; i < 10; i++)
//    {
//        cout << "N[" << i << "] = " << q[i] << endl;
//    }
//
//    return 0;
//}


// 739. 数组选择

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[100];
//
//    for (int i = 0; i < 100; i++) cin >> q[i];
//
//    for (int i = 0; i < 100; i++)
//    {
//        if (q[i] <= 10) cout << "A[" << i << "] = " << fixed << setprecision(1) << q[i] << endl;
//    }
//
//    return 0;
//}

// 743. 数组中的行

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double q[12][12];

    int l;
    char ch;

    double sum;

    cin >> l >> ch;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
        {
            cin >> q[i][j];
            if (i == l) sum += q[i][j];
        }

    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 12.0 << endl;

    return 0;
}
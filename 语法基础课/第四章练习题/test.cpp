// 737. �����滻

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

// 738. �������

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


// 739. ����ѡ��

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

// 743. �����е���

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    int l;
//    char ch;
//
//    double sum;
//
//    cin >> l >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//        {
//            cin >> q[i][j];
//            if (i == l) sum += q[i][j];
//        }
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 12.0 << endl;
//
//    return 0;
//}

// 745. ��������ϰ벿��

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//    char ch;
//    double sum = 0;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//        {
//            cin >> q[i][j];
//            if (i < j) sum += q[i][j];
//        }
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 66.0 << endl;
//
//    return 0;
//}

// 747. ��������ϰ벿��

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    for (int i = 0; i < 11; i++)
//        for (int j = 0; j < 11 - i; j++)
//        {
//            sum += q[i][j];
//        }
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 66.0 << endl;
//
//    return 0;
//}

// 740. ����任

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int q[20], tmp[20];
//
//    for (int i = 0; i < 20; i++) cin >> q[i];
//
//    for (int i = 0, j = 19; i < 20, j >= 0; i++, j--) tmp[i] = q[j];
//
//    for (int i = 0; i < 20; i++) cout << "N[" << i << "] = " << tmp[i] << endl;
//
//
//    return 0;
//}

// 741. 쳲���������

//#include <iostream>
//
//using namespace std;
//
//const int N = 60;
//
//long long Fib[N];
//
//int main()
//{
//    int t;
//    cin >> t;
//
//    Fib[0] = 0;
//    Fib[1] = 1;
//
//    for (int i = 2; i <= 60; i++)
//    {
//        Fib[i] = Fib[i - 2] + Fib[i - 1];
//    }
//
//    while (t--)
//    {
//        int n;
//        cin >> n;
//        cout << "Fib(" << n << ") = " << Fib[n] << endl;
//    }
//
//    return 0;
//}

// 742. ��С��������λ��

//#include <iostream>
//
//using namespace std;
//
//const int N = 1000;
//
//int q[N];
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int min = 1001;
//    int pos = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        cin >> q[i];
//
//        if (q[i] < min)
//        {
//            min = q[i];
//            pos = i;
//        }
//    }
//
//    cout << "Minimum value: " << min << endl;
//    cout << "Position: " << pos << endl;
//
//    return 0;
//}

// 744. �����е���

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//double q[12][12];
//
//int main()
//{
//    int c;
//    char ch;
//    double sum;
//    cin >> c >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//        {
//            cin >> q[i][j];
//
//            if (j == c) sum += q[i][j];
//        }
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 12.0 << endl;
//
//    return 0;
//}

// 749. ������Ϸ�����

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum  = 0 ;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    for (int i = 0; i < 5; i++)
//        for (int j = i + 1; j <= 10 - i; j++)
//            sum += q[i][j];
//
//    if (ch == 'S') 
//        cout << sum << endl;
//    else 
//        cout << fixed << setprecision(1) << sum / 30.0 << endl;
//
//    return 0;
//}

// 751. �����������

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum = 0.0;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    // �ϰ벿�ֺ�        
//    for (int i = 1; i <= 5; i++)
//        for (int j = 0; j < i; j++)
//            sum += q[i][j];
//
//    // �°벿�ֺ�
//    for (int i = 6; i <= 10; i++)
//        for (int j = 0; j <= 10 - i; j++)
//            sum += q[i][j];
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 30.0 << endl;
//
//    return 0;
//}

// 748. ��������°벿��

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum = 0.0;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    for (int i = 1; i <= 11; i++)
//        for (int j = 11; j >= 12 - i; j--)
//            sum += q[i][j];
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 66.0 << endl;
//
//    return 0;
//}

// 746. ��������°벿��

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum = 0.0;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    for (int i = 1; i <= 11; i++)
//        for (int j = 0; j < i; j++)
//            sum += q[i][j];
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 66.0 << endl;
//
//    return 0;
//}

// 750. ������·�����

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//    double q[12][12];
//
//    char ch;
//    double sum = 0.0;
//
//    cin >> ch;
//
//    for (int i = 0; i < 12; i++)
//        for (int j = 0; j < 12; j++)
//            cin >> q[i][j];
//
//    // �󲿷�
//    for (int i = 7; i <= 11; i++)
//        for (int j = 5; j > 11 - i; j--)
//            sum += q[i][j];
//
//    // �Ұ벿��
//    for (int i = 7; i <= 11; i++)
//        for (int j = 6; j < i; j++)
//            sum += q[i][j];
//
//    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
//    else cout << fixed << setprecision(1) << sum / 30.0 << endl;
//
//    return 0;
//}

// 752. ������ҷ�����

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double q[12][12];

    char ch;
    double sum = 0.0;
    cin >> ch;

    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> q[i][j];

    // �ϲ���
    for (int i = 1; i <= 5; i++)
        for (int j = 12 - i; j <= 11; j++)
            sum += q[i][j];

    // �°벿��
    for (int i = 6; i <= 10; i++)
        for (int j = i + 1; j <= 11; j++)
            sum += q[i][j];

    if (ch == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 30.0 << endl;

    return 0;
}
// 708. 偶数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    for (int i = 2; i <= 100; i += 2)
//    {
//        cout << i << endl;
//    }
//    return 0;
//}

// 709. 奇数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x;
//    cin >> x;
//
//    for (int i = 1; i <= x; i += 2)
//    {
//        cout << i << endl;
//    }
//
//    return 0;
//}

// 712. 正数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    double x;
//    int cnt = 0;
//
//    for (int i = 0; i < 6; i++)
//    {
//        cin >> x;
//        if (x > 0)
//            cnt++;
//    }
//
//    cout << cnt << " positive numbers" << endl;
//    return 0;
//}

// 714. 连续奇数的和 1

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    int x, y, sum = 0;
//    cin >> x >> y;
//
//    if (x > y) swap(x, y);
//
//    for (int i = x + 1; i < y; i++)
//    {
//        if (i & 1) sum += i;
//    }
//
//    cout << sum << endl;
//
//    return 0;
//}

// 716. 最大数和它的位置

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int cnt = 0, max = 0, num;
//    for (int i = 1; i <= 100; i++)
//    {
//        cin >> num;
//        if (num > max)
//        {
//            max = num;
//            cnt = i;
//        }
//    }
//
//    cout << max << endl << cnt << endl;
//}

// 721. 递增序列

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int x;
//
//    for (;;)
//    {
//        cin >> x;
//        for (int i = 1; i <= x; i++) cout << i << " ";
//        if (x) cout << endl;
//        else break;
//    }
//
//    return 0;
//}


// 720. 连续整数相加

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, k;
//    cin >> n;
//
//    while (1)
//    {
//        cin >> k;
//        if (k)
//            break;
//    }
//
//    int sum = 0;
//
//    while (k--) sum += n++;
//
//    cout << sum << endl;
//
//    return 0;
//}

// 724. 约数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cin >> n;
//
//    int div = 1;
//
//    while (1)
//    {
//        if (n % div == 0) cout << div << endl;
//        div++;
//        if (div > n) break;
//    }
//
//    return 0;
//}

// 723. PUM

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, m, i = 1;
//
//    cin >> n >> m;
//
//    while (n--)
//    {
//        int tmp = m;
//        while (tmp - 1)
//        {
//            cout << i << " ";
//            i++;
//            tmp--;
//        }
//        cout << "PUM" << endl;
//        i++;
//    }
//
//    return 0;
//}

// 715. 余数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cin >> n;
//
//    for (int i = 2; i < 10000; i++)
//    {
//        if (i % n == 2) cout << i << endl;
//    }
//
//    return 0;
//}

// 710. 六个奇数

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, cnt = 0;
//
//    cin >> n;
//
//    while (1)
//    {
//        if (n & 1)
//        {
//            cout << n << endl;
//            n += 2;
//            cnt++;
//        }
//        else n += 1;
//        if (cnt == 6) break;
//    }
//}

// 711. 乘法表

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    for (int i = 1; i <= 10; i++)
//    {
//        cout << i << " x " << n << " = " << i * n << endl;
//    }
//
//    return 0;
//}

// 718. 实验

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, a;
//    char t;
//    cin >> n;
//
//    int cnt, cntc, cntr, cntf;
//    cnt = cntf = cntr = cntc = 0;
//
//    while (n--)
//    {
//        cin >> a;
//        cin >> t;
//
//        cnt += a;
//
//        if (t == 'C') cntc += a;
//        if (t == 'R') cntr += a;
//        if (t == 'F') cntf += a;
//    }
//
//    cout << "Total: " << cnt << " animals" << endl;
//    cout << "Total coneys: " << cntc << endl;
//    cout << "Total rats: " << cntr << endl;
//    cout << "Total frogs: " << cntf << endl;
//
//    printf("Percentage of coneys: %.2lf %\n", (cntc * 100) / (cnt * 1.0));
//    printf("Percentage of rats: %.2lf %\n", (cntr * 100) / (cnt * 1.0));
//    printf("Percentage of frogs: %.2lf %\n", (cntf * 100) / (cnt * 1.0));
//
//    return 0;
//}

// 713. 区间 2

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n, num;
//    cin >> n;
//
//    int cnti = 0, cnto = 0;
//
//    while (n--)
//    {
//        cin >> num;
//
//        if (num >= 10 && num <= 20) cnti++;
//        else cnto++;
//    }
//
//    cout << cnti << " in" << endl;
//    cout << cnto << " out" << endl;
//
//    return 0;
//}

// 717. 简单斐波那契

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int fib1 = 0;
//    int fib2 = 1;
//    int fib3 = 1;
//    int cnt = 1;
//
//    while (n--)
//    {
//        if (cnt == 1) cout << fib1 << " ";
//        else if (cnt == 2) cout << fib2 << " ";
//        else
//        {
//            cout << fib3 << " ";
//            fib1 = fib2;
//            fib2 = fib3;
//            fib3 = fib1 + fib2;
//        }
//        cnt++;
//    }
//
//    return 0;
//}

// 719. 连续奇数的和 2

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    while (n--)
//    {
//        int x, y;
//        cin >> x >> y;
//
//        if (x > y) swap(x, y);
//
//        int sum = 0;
//
//        for (int i = x + 1; i < y; i++)
//        {
//            if (i & 1) sum += i;
//        }
//
//        cout << sum << endl;
//    }
//
//    return 0;
//}

// 722. 数字序列和它的和

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//    int m, n;
//
//    while (1)
//    {
//        cin >> m >> n;
//
//        if (m <= 0 || n <= 0) break;
//
//        if (m > n) swap(m, n);
//
//        int sum = 0;
//
//        for (int i = m; i <= n; i++)
//        {
//            sum += i;
//            cout << i << " ";
//        }
//
//        cout << "Sum=" << sum << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cin >> n;
//
//    while (n--)
//    {
//        int num;
//        cin >> num;
//
//        int sum = 0, tmp = num - 1;
//
//        while (tmp)
//        {
//            if (num % tmp == 0) 
//                sum += tmp;
//            tmp--;
//        }
//
//        if (sum == num) cout << num << " is perfect" << endl;
//        else cout << num << " is not perfect" << endl;
//    }
//
//    return 0;
//}

// 725. 完全数

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    int n;
//
//    cin >> n;
//
//    while (n--)
//    {
//        int num;
//        cin >> num;
//
//        int sum = 0;
//
//        // c++ 一秒钟运算的数据量不能超过1亿
//        // n 上限 100, num 上限 1亿, 这里就是 100 亿, 就会超时
//        // 得优化
//        for (int i = 1; pow(i, 2) <= num; i++)
//        {
//            if (num % i == 0)
//            {
//                if (i < num) sum += i;
//                if (num / i != i && num / i < num) sum += num / i;
//            }
//        }
//
//        if (sum == num) cout << num << " is perfect" << endl;
//        else cout << num << " is not perfect" << endl;
//    }
//
//    return 0;
//}

// 726. 质数

//#include <iostream>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    while (n--)
//    {
//        int x;
//        cin >> x;
//
//        int cnt = 1;
//
//        for (int i = 2; i <= sqrt(x); i++)
//        {
//            if (x % i == 0)
//            {
//                cout << x << " is not prime" << endl;
//                cnt = 0;
//                break;
//            }
//        }
//        if (cnt) cout << x << " is prime" << endl;
//    }
//
//    return 0;
//}

// 727. 菱形

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cx = n / 2, cy = n / 2;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (abs(cx - i) + abs(cy - j) <= n / 2) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}

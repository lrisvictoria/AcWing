// 804

//#include <iostream>
//
//using namespace std;
//
//int fac(int n)
//{
//    if (n <= 2) {
//        return n;
//    }
//    else {
//        return n * fac(n - 1);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    cout << fac(n) << endl;
//
//    return 0;
//}

// 805

//#include <iostream>
//
//using namespace std;
//
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}
//
//int main()
//{
//    int x, y;
//    cin >> x >> y;
//
//    cout << max(x, y) << endl;
//
//    return 0;
//}

// 808

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int gcd(int a, int b)
//{
//    int c = 0;
//    while (b) {
//        c = a % b;
//        a = b;
//        b = c;
//    }
//    return a;
//}
//
//int main()
//{
//    int x, y;
//    cin >> x >> y;
//
//    cout << gcd(x, y) << endl;
//
//    return 0;
//}

// 811

//#include <iostream>
//
//using namespace std;
//
//void swap(int& x, int& y)
//{
//    int tmp = x;
//    x = y;
//    y = tmp;
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//
//    swap(a, b);
//
//    cout << a << " " << b << endl;
//
//    return 0;
//}

// 812

//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//void print(int a[], int size)
//{
//    for (int i = 0; i < size; i++) {
//        cout << a[i] << " ";
//    }
//}
//
//int main()
//{
//    int n, size, q[N];;
//    cin >> n >> size;
//
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//    }
//
//    print(q, size);
//
//    return 0;
//}

// 813

//#include <iostream>
//
//using namespace std;
//
//void print2D(int q[][100], int row, int col)
//{
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            cout << q[i][j] << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    int row, col;
//    cin >> row >> col;
//
//    int q[100][100];
//
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < col; j++) {
//            cin >> q[i][j];
//        }
//    }
//
//    print2D(q, row, col);
//
//    return 0;
//}

// 819

//#include <iostream>
//
//using namespace std;
//
//int fac(int n)
//{
//    if (n <= 2) {
//        return n;
//    }
//    else {
//        return n * fac(n - 1);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    cout << fac(n) << endl;
//
//    return 0;
//}

// 820

//#include <iostream>
//
//using namespace std;
//
//int fib(int n)
//{
//    if (n <= 2) {
//        return 1;
//    }
//    else {
//        return fib(n - 1) + fib(n - 2);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    cout << fib(n) << endl;
//
//    return 0;
//}

// 810

//#include <iostream>
//
//using namespace std;
//
//int abs(int n)
//{
//    if (n < 0) {
//        return -1 * n;
//    }
//    return n;
//}
//
//int main()
//{
//    int x;
//    cin >> x;
//
//    cout << abs(x) << endl;
//
//    return 0;
//}

// 806

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//double add(double x, double y)
//{
//    return x + y;
//}
//
//int main()
//{
//    double x, y;
//    cin >> x >> y;
//
//    cout << fixed << setprecision(2) << add(x, y) << endl;
//
//    return 0;
//}

// 807

//#include <iostream>
//
//using namespace std;
//
//int sum(int l, int r)
//{
//    int sum = 0;
//    for (int i = l; i <= r; i++) {
//        sum += i;
//    }
//    return sum;
//}
//
//int main()
//{
//    int l, r;
//    cin >> l >> r;
//
//    cout << sum(l, r) << endl;
//
//    return 0;
//}

// 809

//��ʽ
//#include <iostream>
//
//using namespace std;
//
//int lcm(int x, int y)
//{
//    int z = 0;
//    int x1 = x;
//    int y1 = y;
//    // �������Լ��
//    while (y) {
//        z = x % y;
//        x = y;
//        y = z;
//    }
//    // ��ʽ lcm = x * y / gcd
//    // ��ʱ x Ϊ���Լ�� gcd 
//    return x1 * y1 / x;
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//
//    cout << lcm(a, b) << endl;
//
//    return 0;
//}
//���
//#include <iostream>
//
//using namespace std;
//
//int lcm(int x, int y)
//{
//    int n = max(x, y);
//
//    while (1) {
//        if (n % x == 0 && n % y == 0) {
//            break;
//        }
//        n++;
//    }
//    return n;
//}
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//
//    cout << lcm(a, b) << endl;
//
//    return 0;
//}

// 814

//#include <iostream>
//
//using namespace std;
//
//const int N = 110;
//
//void copy(int a[], int b[], int size)
//{
//    for (int i = 0; i < size; i++) {
//        b[i] = a[i];
//    }
//}
//
//int main()
//{
//    int n, m, size;
//    cin >> n >> m >> size;
//
//    int a[N], b[N];
//
//    for (int i = 0; i < n; i++) {
//        cin >> a[i];
//    }
//
//    for (int i = 0; i < m; i++) {
//        cin >> b[i];
//    }
//
//    copy(a, b, size);
//
//
//    for (int i = 0; i < m; i++) {
//        cout << b[i] << " ";
//    }
//
//    return 0;
//}

// 815

//#include <iostream>
//
//using namespace std;
//
//void print(char* str)
//{
//    cout << str << endl;
//}
//
//int main()
//{
//    char str[101];
//    // fgets ����뻻�У���һ��
//    // fgets(str, 101, stdin);
//
//    cin.getline(str, 101);
//
//    print(str);
//
//    return 0;
//}

// 816

//#include <iostream>
//
//using namespace std;
//
//const int N = 1010;
//
//void reverse(int q[], int size)
//{
//    int l = 0, r = size - 1;
//    while (l < r) {
//        int tmp = q[l];
//        q[l] = q[r];
//        q[r] = tmp;
//        l++;
//        r--;
//    }
//}
//
//int main()
//{
//    int n, size;
//    int q[N];
//
//    cin >> n >> size;
//
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//    }
//
//    reverse(q, size);
//
//    for (int i = 0; i < n; i++) {
//        cout << q[i] << " ";
//    }
//
//    return 0;
//}

// 817

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//
//
//int get_unique_count(int a[], int n)
//{
//    int cnt = 0;
//
//    // ����ѭ��
//    // �������Ƿ���ھ��ǿ������֮ǰ��û�к��������ͬ������
//    // �ڶ���ѭ������������û����ͬ��
//    for (int i = 0; i < n; i++) {
//        bool has_occured = false;
//        for (int j = 0; j < i; j++) {
//            if (a[i] == a[j]) {
//                has_occured = true;
//                break;
//            }
//        }
//        if (!has_occured) {
//            cnt++;
//        }
//    }
//
//    return cnt;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    int q[N];
//
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//    }
//
//    cout << get_unique_count(q, n) << endl;
//
//    return 0;
//}

// 818

//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//const int N = 1010;
//
//void sort(int q[], int l, int r)
//{
//    if (l >= r) {
//        return;
//    }
//    int key = q[l + r >> 1], i = l - 1, j = r + 1;
//    while (i < j) {
//        do {
//            i++;
//        } while (q[i] < key);
//        do {
//            j--;
//        } while (q[j] > key);
//        if (i < j) {
//            swap(q[i], q[j]);
//        }
//    }
//    sort(q, l, j);
//    sort(q, j + 1, r);
//}
//
//int main()
//{
//    int n, l, r;
//    int q[N];
//
//    cin >> n >> l >> r;
//
//    for (int i = 0; i < n; i++) {
//        cin >> q[i];
//    }
//
//    sort(q, l, r);
//
//    for (int i = 0; i < n; i++) {
//        cout << q[i] << " ";
//    }
//
//    return 0;
//}

// 821

//쳲���������
//#include <iostream>
//
//using namespace std;
//
//int foo(int n)
//{
//    if (n <= 2) {
//        return n;
//    }
//    else {
//        return foo(n - 1) + foo(n - 2);
//    }
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//
//    cout << foo(n) << endl;
//
//    return 0;
//}
//�ݹ��������ⷨ
//#include <iostream>
//
//using namespace std;
//
//int n;
//int res;
//
///*
//�������
//k == n ��������� res++
//k < n û�ҵ��������˵ݹ�
//k > n Խ�ˣ�����
//k > n Ҳ���Բ�������Ϊ������������������ʲô
//�϶��᷵�ص�
//*/
//
//void foo(int k)
//{
//    if (k == n) {
//        res++;
//    }
//    else if (k < n) {
//        foo(k + 1);
//        foo(k + 2);
//    }
//    else {
//        return;
//    }
//}
//
//int main()
//{
//    cin >> n;
//
//    foo(0);
//
//    cout << res << endl;
//
//    return 0;
//}

// 822

//#include <iostream>
//
//using namespace std;
//
//int n, m;
//int ans;
//
//void dfs(int x, int y)
//{
//    if (x == n && y == m) {
//        ans++;
//    }
//    else {
//        if (x < n) {
//            dfs(x + 1, y);
//        }
//        if (y < m) {
//            dfs(x, y + 1);
//        }
//    }
//}
//
//int main()
//{
//    cin >> n >> m;
//    dfs(0, 0);
//
//    cout << ans << endl;
//
//    return 0;
//}

// 823

#include <iostream>

using namespace std;

const int N = 10;

int n;

void dfs(int u, int nums[], bool state[])
{
    // ��� u > n ˵��һ���Ѿ�����, ֱ�Ӵ�ӡ
    if (u > n) {
        for (int i = 1; i <= n; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    else {
        for (int i = 1; i <= n; i++) {
            // �����ǰλ��û������
            if (!state[i]) {
                state[i] = true;
                nums[u] = i;
                dfs(u + 1, nums, state);
                state[i] = false; // �ָ��ֳ�
            }
        }
    }
}

int main()
{
    cin >> n;

    int nums[N];
    bool state[N] = { 0 };

    dfs(1, nums, state);

    return 0;
}
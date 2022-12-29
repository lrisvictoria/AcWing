/*
北京大学对本科生的成绩施行平均学分绩点制（GPA）。

既将学生的实际考分根据不同的学科的不同学分按一定的公式进行计算。

公式如下：

实际成绩     绩点
90——100     4.0
85——89      3.7
82——84      3.3
78——81      3.0
75——77      2.7
72——74      2.3
68——71      2.0
64——67      1.5
60——63      1.0
60以下        0
一门课程的学分绩点 = 该课绩点 × 该课学分

总评绩点 = 所有学科学分绩点之和 / 所有课程学分之和

现要求你编写程序求出某人 A 的总评绩点（GPA）。

输入格式
第一行，总的课程数 n；

第二行，相应课程的学分（两个学分间用空格隔开）；

第三行，对应课程的实际得分；

此处输入的所有数字均为整数。

输出格式
输出有一行，总评绩点，精确到小数点后 2 位小数。

数据范围
1≤n≤10,
学分取值范围 [1,10],
课程得分范围 [0,100]。

输入样例：
5
4 3 4 2 3
91 88 72 69 56
输出样例：
2.52
*/

// 题解：https://www.acwing.com/file_system/file/content/whole/index/content/7582156/

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 10;

/*
* n   学科数
* sum 学分和
* a[] 存放每科学分
* x   课程实际得分
* res 总评绩点
*/

int n, sum, a[N], x;
double res;

double sc(int x)
{
    if (x >= 90 && x <= 100) return 4.0;
    else if (x >= 85 && x <= 89) return 3.7;
    else if (x >= 82 && x <= 85) return 3.3;
    else if (x >= 78 && x <= 81) return 3.0;
    else if (x >= 75 && x <= 77) return 2.7;
    else if (x >= 72 && x <= 74) return 2.3;
    else if (x >= 68 && x <= 71) return 2.0;
    else if (x >= 64 && x <= 67) return 1.5;
    else if (x >= 60 && x <= 63) return 1.0;
    else return 0.0;
}

int main()
{
    cin >> n;

    // 求学分和
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    // 求学分绩点之和
    for (int i = 0; i < n; i++) {
        cin >> x;
        res += sc(x) * a[i];
    }

    // 输出 学分绩点之和 / 学分和
    cout << fixed << setprecision(2) << res / sum << endl;

    return 0;
}
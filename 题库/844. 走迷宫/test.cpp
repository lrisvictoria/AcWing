/*
����һ�� n��m
 �Ķ�ά�������飬������ʾһ���Թ���������ֻ���� 0
 �� 1
������ 0
 ��ʾ�����ߵ�·��1
 ��ʾ����ͨ����ǽ�ڡ�

�������һ����λ�����Ͻ� (1,1)
 ������֪����ÿ�ο������ϡ��¡���������һ�������ƶ�һ��λ�á�

���ʣ����˴����Ͻ��ƶ������½� (n,m)
 ����������Ҫ�ƶ����ٴΡ�

���ݱ�֤ (1,1)
 ���� (n,m)
 ��������Ϊ 0
����һ�����ٴ���һ��ͨ·��

�����ʽ
��һ�а����������� n
 �� m
��

������ n
 �У�ÿ�а��� m
 ��������0
 �� 1
������ʾ�����Ķ�ά�����Թ���

�����ʽ
���һ����������ʾ�����Ͻ��ƶ������½ǵ������ƶ�������

���ݷ�Χ
1��n,m��100
����������
5 5
0 1 0 0 0
0 1 0 1 0
0 0 0 0 0
0 1 1 1 0
0 0 0 1 0
���������
8
*/

// ��⣺acwing.com/file_system/file/content/whole/index/content/7913535/

#include <iostream>
#include <cstring>
#include <queue>

using namespace std;

const int N = 110;

typedef pair<int, int> pii;

int g[N][N], d[N][N], n, m;

int bfs()
{
    queue<pii> q;
    q.push({ 0, 0 });
    memset(d, -1, sizeof(d));

    int dx[] = { -1, 0, 1, 0 }, dy[] = { 0, 1, 0, -1 };
    d[0][0] = 0;

    while (!q.empty()) {
        pii t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int x = t.first + dx[i], y = t.second + dy[i];
            if (x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1) {
                d[x][y] = d[t.first][t.second] + 1;
                q.push({ x, y });
            }
        }
    }
    return d[n - 1][m - 1];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> g[i][j];
        }
    }

    cout << bfs() << endl;

    return 0;
}
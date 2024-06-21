#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
int n, m;
int cnt;

int dx[2] = {1,0};
int dy[2] = {0,1};

void Try(int i, int j)
{
    if(i == n && j == m)
    {
        cnt++;
    }
    for(int k = 0; k<2; k++)
    {
        if(i+dx[k] <= n && j+dy[k] <= m)
            Try(i+dx[k], j+dy[k]);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        cin >> n >> m;
        for(int i = 1; i<=n; i++)
            for(int j = 1; j<=m; j++) cin >> a[i][j];
        Try(1,1);
        cout << cnt << endl;
    }
}
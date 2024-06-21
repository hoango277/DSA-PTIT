#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, j, x;
        int n, m;
        cin >> n >> m;
        int a[n+5][m+5];
        int c[n+5][m+5];
        memset(c, -1, sizeof(c));
        for(int i = 1; i<=n; i++)
            for(int j = 1; j<=m; j++)
                cin >> a[i][j];
        queue<pair<int, int>> q;
        q.push({1,1});
        c[1][1] = 0;
        while(q.size())
        {
            pair<int, int> t = q.front();
            i = t.first; j = t.second;
            x = a[i][j]; q.pop();
            if(j+x <= m && c[i][j+x] == -1)
            {
                q.push({i, j+x});
                c[i][j+x] = c[i][j] + 1;
            }
            if(i+x <=n && c[i+x][j] == -1)
            {
                q.push({i+x, j});
                c[i+x][j] = c[i][j] + 1;
            }
            if(c[n][m] != -1)
            {
                break;
            }
        }
        cout << c[n][m] << endl;

    }   
}
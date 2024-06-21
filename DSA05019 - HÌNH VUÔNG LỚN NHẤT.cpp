#include <bits/stdc++.h>
using namespace std;
long long f[1000005];

int main()
{
    int t;
    cin >>t;
    while(t--)
    {     
        int n,m;
        cin >> n >> m;
        int a[n+5][m+5], b[n+5][m+5];
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                   cin >> a[i][j];
                   b[i][j] = a[i][j];
            }
        }
        int res = 0;
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
            {
                if(b[i][j])
                {
                    b[i][j] = min(b[i-1][j], b[i-1][j-1]);
                    b[i][j] = min(b[i][j], b[i][j-1]);
                    b[i][j]++;
                }
                res = max(b[i][j], res);

            }
        }
        cout << res << endl;
    }
}
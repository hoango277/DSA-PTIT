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
            }
        }
        for(int i = 1; i<=n; i++)
        {
            b[i][1] = b[i-1][1] + a[i][1];
        }
        for(int j = 1; j<=m; j++)
        {
            b[1][j] = b[1][j-1] + a[1][j];
        }

        for(int i = 2; i<=n; i++)
        {
            for(int j = 2; j<=m; j++)
            {
                b[i][j] = min(b[i-1][j], min(b[i][j-1],b[i-1][j-1])) + a[i][j];
            }
        }
        cout << b[n][m] << endl;

       
    }
}
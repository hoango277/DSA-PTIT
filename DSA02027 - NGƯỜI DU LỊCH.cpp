#include <bits/stdc++.h>
using namespace std;
int a[20][20];
int mini = 1e9+7;
int x[100];
bool b[100];
long long ans = 1e18;
int n;
long long sum = 0;

void Try(int i)
{
    for(int j = 2; j<=n; j++)
    {
        if(!b[j])
        {
            x[i] = j;
            b[j] = 1;
            sum += a[x[i]][x[i-1]];
            if(i==n)
            {
                ans = min(ans, sum + a[x[i]][1]);
            }
            else if (sum + mini*(n-i+1) < ans)
                Try(i+1);
            b[j] = 0;
            sum -= a[x[i]][x[i-1]];
        }
    }
}

int main()
{
    memset(b, 0, sizeof(b));
    cin >> n;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
        {
             cin >> a[i][j];
             if(a[i][j])
                mini = min(mini, a[i][j]);
        }
    x[1] = 1;
    Try(2);
    cout << ans;
    
}
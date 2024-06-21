#include <bits/stdc++.h>
using namespace std;
long long f[1000005];

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        memset(f, 0, sizeof(f));
        int a[n];
        for(int i = 0; i<n; i++)
            cin >> a[i];
        f[0] = a[0];
        f[1] = max(a[0], a[1]);
        for(int i = 2; i<n; i++)
        {
            f[i] = max(f[i-1], f[i-2]+a[i]);
        }
        cout << f[n-1] << endl;         
        
    }
}
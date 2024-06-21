#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m], f[n+m+5];
        memset(f, 0, sizeof(f));
        for(int i = 0; i<n; i++)
            cin >> a[i];
        for(int i = 0; i<m; i++)
            cin >> b[i];
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                f[i+j] += a[i] * b[j];
            }
        }
        for(int i = 0; i<n+m-1; i++)
        {
            cout << f[i] << ' ';
        }
        cout << endl;
    }   
}
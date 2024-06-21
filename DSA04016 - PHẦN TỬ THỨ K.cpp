#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[n], b[m];
        int c[n+m];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i<m; i++)
        {
            cin >> b[i];
        }
        int x = 0, y = 0, l = 0;
        while(x<n && y < m)
        {
            if(a[x] < b[y])
            {
                c[l++] = a[x++];
            }
            else
                c[l++] = b[y++];
        }
        while(x<n)
        {
            c[l++] = a[x++];
        }
        while(y<m)
        {
            c[l++] = b[y++];
        }
        cout << c[k-1] << endl;
    }   
}

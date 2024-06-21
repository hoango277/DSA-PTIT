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
        int a[n], b[m], c[k];
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;
        for(int &i : c) cin >> i;
        int check = 0;
        for(int i = 0; i<n; i++)
        {
            int* x = lower_bound(b, b+m, a[i]);
            if(*x == a[i])
            {
                int *y = lower_bound(c, c+k, a[i]);
                if(*y == a[i])
                {
                    *x = -1;
                    *y = -1;
                    check = 1;
                    cout << a[i] << ' ';
                }
            }
        }
        if(!check)
        {
            cout << "NO";
        }
        cout << endl;
    }   
}
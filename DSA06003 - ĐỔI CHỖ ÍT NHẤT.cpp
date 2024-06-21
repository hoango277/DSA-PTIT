#include<bits/stdc++.h>
using namespace std;
int x;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
        cin >> n;
        int ans = 0;
        int a[n];
        for(int i = 0; i<n; i++)  cin >> a[i];
        for(int i = 0; i<n-1; i++)
        {
            int idx = i;
            for(int j = i+1; j<n; j++)
            {
                if(a[j] < a[idx]) idx = j;
            }
            if(idx!=i)
            {
                ans++;
                swap(a[idx], a[i]);
            }
        }
        cout << ans << endl;
    }
}
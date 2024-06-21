#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
long long f[1000005];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        memset(f, 0, sizeof(f));
        f[0] = a[0];
        for(int i = 1; i<n; i++)
        {
            if(i==1)
            {
                f[i] = max(a[0], a[1]);
            }
            else
                f[i] = max(f[i-1], f[i-2]+a[i]);
        }
        cout << f[n-1] << endl;
	}	
}   

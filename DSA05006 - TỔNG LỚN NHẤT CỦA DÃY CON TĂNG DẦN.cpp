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
        for(int &i : a) cin >> i;
        memset(f, 0, sizeof(f));
        for(int i = 0; i<n; i++)
        {
            f[i] = a[i];
            for(int j = 0; j<i; j++)
            {
                if(a[i] > a[j])
                {
                    f[i] = max(f[i], f[j]+a[i]);
                }
            }
        }
        cout << *max_element(f, f+n)<< endl;
	}	
}   

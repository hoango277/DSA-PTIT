#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int f[1005];
		memset(f, 0, sizeof(f));
		f[0] = 1;
		int a[n];
		for(auto &i : a) cin >> i;
		for(int i = 1; i<=k; i++)
		{
			for(int j = 0; j<n; j++)
			{
				if(a[j] <= i) f[i] = (f[i] + f[i-a[j]])%mod;
			}
		}
		cout << f[k] << endl;
	}
}

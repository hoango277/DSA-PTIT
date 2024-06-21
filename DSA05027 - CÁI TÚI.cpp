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
		int n, v;
		cin >> n >> v;
		int a[n+1], c[n+1];
		int f[n+1][v+1];
		memset(f, 0, sizeof(f));
		for(int i = 1; i<=n; i++)
			cin >> a[i];
		for(int i = 1; i<=n; i++)
			cin >> c[i];
		for(int i = 1; i<=n; i++)
		{
			for(int j = 0; j<=v; j++)
			{
				f[i][j] = f[i-1][j];
				if(j>=a[i])
				{
					f[i][j] = max(f[i][j], f[i-1][j-a[i]]+c[i]);
				}
			}
		}
		cout << f[n][v] << endl;
	}	
}

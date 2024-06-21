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
		int n;
		cin >> n;
		int x, y, z;
		cin >> x >> y >> z;
		int f[n+1] = {};
		f[1] = x;
		for(int i = 1; i<=n; i++)
		{
			if(i%2)
			{
				f[i] = min(f[i-1]+x, f[(i+1)/2]+z+y);
			}
			else
				f[i] = min(f[i-1]+x, f[i/2]+z);
		}
		cout << f[n] << endl;
	}
}

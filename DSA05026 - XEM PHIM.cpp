#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;

int main()
{
	int c, n;
	cin >> c >> n;
	int a[n];
	for(int i = 0; i<n; i++)
		cin >> a[i];
	vector<bool> f(c+1, 0);
	f[0] = 1;
	for(int i = 0; i<n; i++)
	{
		for(int j = c; j>= a[i]; j--)
		{
			if(f[j-a[i]])
				f[j] = 1;
		}
	}
	for(int i = c; i>=0; i--)
	{
		if(f[i])
		{
				cout << i;
				break;
		}
	}
}

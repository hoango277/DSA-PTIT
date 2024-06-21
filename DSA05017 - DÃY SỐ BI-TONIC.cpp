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
	int a[n];
	int f1[n];
	int f2[n];
	for(int i = 0; i<n; i++)
	{
		cin >> a[i];
		f1[i] = a[i];
		f2[i] = a[i];
	}
	for(int i = 0; i<n; i++)
	{	
		for(int j = 0; j<i; j++)
		{
			if(a[i] > a[j])
			{
				f1[i] = max(f1[i], f1[j]+a[i]);
			}
		}
	}
	for(int i = n-1; i>=0; i--)
	{
		for(int j = n-1; j>i; j--)
		{
			if(a[j] < a[i])
			{
				f2[i] = max(f2[i], f2[j]+a[i]);
			}
		}
	}
	int ans = -1;
	for(int i = 0; i<n; i++)
	{
		ans = max(f1[i]+f2[i]-a[i], ans);
	}
	cout << ans << endl;
	}
}

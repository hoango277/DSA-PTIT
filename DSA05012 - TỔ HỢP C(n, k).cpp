#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
ll a[1001][1001];

void ktao()
{
	for(int i = 0; i<=1000; i++)
	{
		for(int j = 0; j<=i; j++)
		{
			if(i==0||j==i)
			{
				a[i][j] = 1;
			}
			else
				a[i][j] = (a[i-1][j-1] + a[i-1][j])%mod;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	ktao();
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		cout << a[n][k] << endl;
	}
}
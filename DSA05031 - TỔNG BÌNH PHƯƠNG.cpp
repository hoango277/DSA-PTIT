#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	int f[10001];
	f[1] = 1;
	f[2] = 2;
	f[3] = 3;
	for(int i = 4; i<=10000; i++)
	{
		f[i] = i;
		for(int j = 1; j<=sqrt(i); j++)
		{
			f[i] = min(f[i], f[i-j*j] + 1);
		}
	}
	while(t--)
	{
		int n;
		cin >> n;
		cout << f[n] << endl;
	}	
}

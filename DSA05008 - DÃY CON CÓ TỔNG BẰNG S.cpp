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
		int n, s;
		cin >> n >> s;
		vector<bool> f(s+1, 0);
		int a[n];
		f[0] = 1;
		for(int i = 0; i<n; i++)
			cin >> a[i];
		for(int i = 0; i<n; i++)
		{
			for(int j = s; j>=a[i]; j--)
			{
				if(f[j-a[i]] == 1)
				{
					f[j] = 1;
				}
			}
		}
		if(f[s])
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
}

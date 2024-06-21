#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
	int n;
	cin >> n;
	int a[n],b[n];
	for(int i = 0; i<n; i++)
	{
		a[i] = i+1;
		cin >> b[i];
	}
	bool check = 1;
	int ans = 0;
	while(1)
	{
		check = 0;
		for(int i = 0; i<n; i++)
		{
			if(a[i] != b[i])
			{
				check = 1;
			}
		}
		if(!check)
			break;
		else
		{
			ans++;
			next_permutation(a, a+n);
		}
	}
	cout << ans+1 << endl;
	
   }
}
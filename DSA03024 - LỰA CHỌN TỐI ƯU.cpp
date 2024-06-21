#include <bits/stdc++.h>
using namespace std;

struct Job{
	int s, e;
};

bool cmp(Job a, Job b)
{
	return a.e < b.e;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		Job a[n];
		for(int i = 0; i<n; i++)
			cin >> a[i].s >> a[i].e;
		sort(a, a+n, cmp);
		int cnt = 0;
		int ans = -1;
		for(int i = 0; i<n; i++)
		{
			if(a[i].s >= ans)
			{
				cnt++;
				ans = a[i].e;
			}
		}
		cout << cnt << endl;
	}
}
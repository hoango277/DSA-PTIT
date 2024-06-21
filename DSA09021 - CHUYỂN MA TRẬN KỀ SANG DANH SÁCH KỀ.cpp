#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[1001][1001];
vector<int> edge[1001];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int v;
	cin >> v;
	memset(a, 0, sizeof a);
	for(int i = 1; i<=v; i++)
		for(int j = 1; j<=v; j++)
		{
			cin >> a[i][j];
			if(a[i][j] == 1)
			{
				edge[i].push_back(j);
			}
		}
	for(int i = 1; i<=v; i++)
	{
		for(int j = 0; j<edge[i].size(); j++)
		{
			cout << edge[i][j] << ' ';
		}
		cout << endl;
	}
}
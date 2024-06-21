#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int t;
	cin >> t;
	while(t--)
	{
		int v, e;
		cin >> v >> e;
		for(int i = 0; i<1001; i++)
		{
			edge[i].clear();
		}
		for(int i = 0; i<e; i++)
		{
			int x, y;
			cin >> x >> y;
			edge[x].push_back(y);
			edge[y].push_back(x);
		}
		for(int i = 1; i<= v; i++)
		{
			cout << i << ": ";
			for(int j = 0; j<edge[i].size(); j++)
			{
				cout << edge[i][j] << ' ';
			}
			cout << endl;
		}
	}   

}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int v;
	cin >> v;
	cin.ignore();
	int idx = 1;
	for(int i = 0; i<v; i++)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			edge[i+1].push_back(stoll(tmp));
		}
	}
	for(int i = 1; i<=v; i++)
	{
		for(int j = 0; j<edge[i].size(); j++)
		{
			if(i<edge[i][j])
			{cout << i << ' ' << edge[i][j];
			cout << endl;}
		}
	}
}
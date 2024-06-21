#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[1001][1001];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int v;
	cin >> v;
	cin.ignore();
	memset(a, 0, sizeof a);

	for(int i = 1; i<=v; i++)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			int x = stoll(tmp);
			a[i][x] = 1;
		}
	}
	for(int i = 1; i<=v; i++)
	{
		for(int j = 1; j<=v; j++)
		{
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
}
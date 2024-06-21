#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];
bool visited[1001];

void dfs(int u)
{
    cout << u << ' ';
    visited[u] = 1;
    for(int i : edge[u])
    {
        if(!visited[i])
        {
            dfs(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int v, e, u;
        cin >> v >> e >> u;
        memset(visited, 0, sizeof visited);
        for(int i = 0; i<1001; i++)
        {
            edge[i].clear();
        }
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
        }
        dfs(u);
        cout << endl;
    }   
}
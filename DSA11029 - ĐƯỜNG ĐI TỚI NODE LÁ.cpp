#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];
bool vs[1001];
vector<int> leaf;
int par[1001];

void dfs(int u)
{
    vs[u] = 1;
    for(int i : edge[u])
    {
        if(!vs[i])
        {
            par[i] = u;
            dfs(i);
        }
    }
}

void path1(int u, int v)
{
    vector<int> path;
    while(v!=u)
    {
        path.push_back(v);
        v = par[v];
    }
    path.push_back(u);
    reverse(path.begin(), path.end());
    for(int i : path)
    {
        cout << i << ' ';
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        for(int i = 0; i<1001; i++)
            edge[i].clear();
        memset(par, 0, sizeof par);
        memset(vs, 0, sizeof vs);
        leaf.clear();
        for(int i = 0; i<n-1; i++)
        {
            int x,y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        for(int i = 2; i<=n; i++)
        {
            if(edge[i].size() == 1 )
                leaf.push_back(i);
        }
        dfs(1);
        for(int i : leaf)
        {
            path1(1, i);
        }
        
    }   
}

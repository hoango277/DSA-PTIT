#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];
int v, e;
int color[1001];

int dfs(int u, int par)
{
   color[u] = 3 - color[par];
   for(int i : edge[u])
   {
    if(color[i] == 0)
    {
        if(!dfs(i, u)) 
            return false;
    }
    else if(color[i] == color[u])
    {
        return false;
    }
   }
   return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        for(int i = 0; i<1001; i++)
        {
            edge[i].clear();
        }
        memset(color, 0, sizeof color);
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        bool ok = 1;
        color[0] = 1;
        for(int i = 1; i<=v; i++)
        {
            if(color[i] == 0)
            {
                if(!dfs(i,0))
                {
                    ok = false;
                }
            }
        }
        if(ok)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }   
}
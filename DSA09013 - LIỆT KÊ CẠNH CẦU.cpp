#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];
bool vs[1001];
vector<pair<int,int>> ds;

void dfs(int u, int s, int t)
{
    vs[u] = true;
    for(int i : edge[u])
    {
        if(u==s && i == t || i == s && u == t)
            continue;
        if(!vs[i])
            dfs(i, s, t);
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
        int v, e;
        cin >> v >> e;
        for(int i = 0; i<1001; i++)
        {
            edge[i].clear();
        }
        ds.clear();
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
            ds.push_back({x, y});
        }
        int cnt = 0;
        memset(vs, 0, sizeof vs);
        for(int i = 1; i<=v; i++)
        {
            if(!vs[i])
            {
                cnt++;
                dfs(i, -1, -1);
            }
        }
        for(auto it : ds)
        {
            memset(vs, 0, sizeof vs);
            int x = it.first, y = it.second;
            int ans = 0;
            for(int i = 1; i<=v; i++)
            {
                if(!vs[i])
                {
                    ans++;
                    dfs(i, x, y);
                }
            }
            if(ans > cnt)
                cout << x << ' ' << y << ' ';
        }
        cout << endl;
    }   
}
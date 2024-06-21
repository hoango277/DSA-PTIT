#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];
bool vs[1001];

void dfs(int u)
{
    vs[u] = true;
    for(int i : edge[u])
    {
        if(!vs[i])
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
        int v, e;
        cin >> v >> e;
        for(int i = 0; i<1001; i++)
            edge[i].clear();
        memset(vs, 0, sizeof vs);
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int tplt = 0;
        for(int i = 1; i<=v; i++)
        {
            if(!vs[i])
            {
                tplt++;
                dfs(i);
            }
        }
        for(int i = 1; i<=v; i++)
        {
            memset(vs, 0, sizeof vs);
            vs[i] = true;
            int cnt = 0;
            for(int j = 1; j<=v; j++)
            {
                if(!vs[j])
                {
                    cnt++;
                    dfs(j);
                }
            }
            if(cnt > tplt)
            {
                cout << i << ' ';
            }
        }
        cout << endl;
    }   
}
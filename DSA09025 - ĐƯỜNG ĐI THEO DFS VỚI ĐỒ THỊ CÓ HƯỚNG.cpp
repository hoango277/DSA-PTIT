#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool vs[1001];
vector<int> edge[1001];
int par[1001];

void dfs(int u)
{
    vs[u] = 1;
    for(int i : edge[u])
    {
        if(!vs[i])
        {    par[i] = u;
            dfs(i);}
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T ;
    while(T--)
    {
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        memset(par, 0, sizeof par);
        memset(vs, 0, sizeof vs);
        for(int i = 0; i<=1001; i++)
            edge[i].clear();
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);   
        }
        dfs(s);
        if(par[t])
        {
            vector <int> v1;
        while(t!=s)
        {
            v1.push_back(t);
            t = par[t];
        }
        v1.push_back(s);
        for(int i = v1.size()-1; ~i; i--)
        {
            cout << v1[i] << ' ';
        }
        }
        else
        {
            cout << "-1";
        }
         cout << endl;
    }   
}
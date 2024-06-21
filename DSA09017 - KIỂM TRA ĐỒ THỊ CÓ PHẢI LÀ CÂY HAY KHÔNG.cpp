#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool visited[1001];
vector<int> edge[1001];


bool dfs(int u, int par)
{
    visited[u] = 1;
    for(int i : edge[u])
    {
        if(!visited[i])
        {
            if(dfs(i, u)) return true;
        }
        else
        {
            if(i!= par) return true;
        }
    }
    return false;
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
        cin >> v;
        e = v-1;
        for(int i = 0; i<1001; i++)
        {
            edge[i].clear();
        }
        memset(visited, 0, sizeof visited);
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int check = 1;
        if(dfs(1, 0))
        {
            check = 0;
        }
        else
        {
            for(int i = 1; i<=v; i++)
            {
                if(!visited[i])
                {
                    check = 0;
                }
            }
        }
        if(check)
        {
            cout << "YES";
        }
        else
            cout << "NO";
            cout << endl;
        
    }   
}
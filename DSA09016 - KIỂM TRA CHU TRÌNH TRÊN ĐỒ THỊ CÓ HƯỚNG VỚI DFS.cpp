#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];
int color[1001];
int check = 0;

bool dfs(int u, int par)
{
    color[u] = 1;
    for(int i : edge[u])
    {
        if(color[i] == 0)
        {
            if(dfs(i, u))
            {
                check = 1;
                return true;
            }
        }
        else
        {
            if(color[i] == 1 && i != par)
            {
                check = 1;
                return true;
            }
        }
    }
    color[u] = 2;
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
        cin >> v >> e;
        memset(color, 0, sizeof color);
        check = 0;
        for(int i = 0; i<1001; i++)
        {
            edge[i].clear();
        }
        for(int i = 1; i<=e; i++)
        {
            int x,y;
            cin >> x >> y;
            edge[x].push_back(y);
        }
        
        for(int i =1; i<=v; i++)
        {
            if(color[i] == 0 && !check)
            {
                dfs(i, 0);
            }
        }
        if(check)
        {
            cout << "YES";
        }
        else
            cout << "NO";
            cout<<endl;
    }   
}
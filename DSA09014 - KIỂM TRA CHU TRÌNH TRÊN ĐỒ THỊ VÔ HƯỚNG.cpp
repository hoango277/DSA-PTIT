#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];
int color[1001];
int check = 0;
int par[1001];

bool bfs(int u)
{
    queue<int> q;
    q.push(u);
    color[u] = 1;
    while(q.size())
    {
        int x = q.front();
        q.pop();
        for(int i : edge[x])
        {
            if(color[i] == 0)
            {
                par[i] = x;
                color[i] = 1;
                q.push(i);
            }
            else
            {
                if(color[i] == 1)
                {
                    if(par[x] !=i)
                    {
                        check = 1;
                        return true;
                    }
                }
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
        memset(par, 0, sizeof par);
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
            edge[y].push_back(x);
        }
        
        for(int i =1; i<=v; i++)
        {
            if(color[i] == 0 && !check)
            {
                bfs(i);
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
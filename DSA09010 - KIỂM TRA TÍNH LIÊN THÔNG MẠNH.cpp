#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1005];
bool visited[1005];

void dfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = 1;
    while(q.size())
    {
        int x = q.front();
        q.pop();
        for(int i : edge[x])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
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
        for(int i = 0; i<1005; i++)
        {
            edge[i].clear();
        }
        int v, e;
        cin >> v >> e;
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x  >> y;
            edge[x].push_back(y);
        }
        int check = 1;
        for(int i = 1; i<=v; i++)
        {
            if(!check)
            {
                break;
            }
            memset(visited, 0, sizeof visited);
            dfs(i);
                for(int j = 1; j<=v; j++)
                {
                    if(!visited[j])
                    {
                        check = 0;
                        cout << "NO" << endl;
                        break;
                    }
                }
        }
        if(check)
        {
            cout << "YES" << endl;
        }
    }   
}
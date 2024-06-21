#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

vector<int> edge[1001];
bool visited[1001];

void bfs(int u)
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
        memset(visited, 0, sizeof visited);
        for(int i = 0; i<1001; i++)
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
            edge[y].push_back(x);
        }
        int cnt = 0;
        for(int i = 1; i<=v; i++)
        {
            if(!visited[i])
            {
                bfs(i);
                cnt++;
            }
        }
        cout << cnt << endl;
    }   
}
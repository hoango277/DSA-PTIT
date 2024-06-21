#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
bool vs[100001];
int height[100001];
vector<int> edge[100001];
int ans = -1;
void dfs(int u)
{
    vs[u] = 1;
    for(int i : edge[u])
    {
        if(!vs[i])
        {
            height[i] = height[u] + 1;
            ans = max(height[i], ans);
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
        ans = -1;
        memset(vs, 0, sizeof vs);
        for(int i = 0; i<100001; i++)
            edge[i].clear();
        int n;
        cin >> n;
        for(int i = 1; i<=n-1; i++)
        {
            int x, y;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        height[1] = 0;
        dfs(1);
        cout << ans << endl;
    }   
}
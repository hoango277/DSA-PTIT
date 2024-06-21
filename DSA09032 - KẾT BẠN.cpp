#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int sz[100001], par[100001];
int ans;

int find(int u)
{
    if(u==par[u])
        return u;
    return par[u] = find(par[u]);
}

bool Union(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x==y)
        return false;
    if(sz[x] < sz[y]) swap(x, y);
    par[y] = x;
    sz[x] += sz[y];
    ans = max(sz[x], ans);
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
         for(int i = 1; i<100001; i++)
        {
            sz[i] = 1;
            par[i] = i;
        }
        ans = -1;
        int v, e;
        cin >> v >> e;
        for(int i = 1; i<=e; i++)
        {
            int x,y;
            cin >> x >> y;
            Union(x, y);
        }
        cout << ans;
        cout << endl;
    }   
}
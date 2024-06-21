#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int sz[1001], par[1001];

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
         for(int i = 1; i<1001; i++)
        {
        sz[i] = 1;
        par[i] = i;
        }
        int v, e;
        cin >> v >>e;
        for(int i = 1; i<=e; i++)
        {
            int x,y;
            Union(x, y);
        }
        int cnt = 0;
        for(int i = 1; i<=v; i++)
        {
            if(i==par[i])
                cnt++;
        }
        if(cnt>1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }   
}
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
        int v, e;
        cin >> v >> e;
        for(int i = 1; i<=v; i++)
        {
            sz[i] = 1;
            par[i] = i;
        }
        int check = 0;
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin >> x >>y;
            if(Union(x, y) == false)
            {
                check = 1;
            }
        }
        if(check)
            cout << "YES\n";
        else
            cout <<"NO\n";
    }   
}
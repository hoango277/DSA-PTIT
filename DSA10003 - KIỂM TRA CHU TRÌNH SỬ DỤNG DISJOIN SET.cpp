#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int sz[1001], par[1001];
vector<int> edge[1001];

int find(int u)
{
    if(u==par[u]) return u;
    else
        return par[u] = find(par[u]);
}

bool Union (int a, int b)
{
    a = find(a);
    b = find(b);
    if(a==b)
        return false;
    if(sz[a] < sz[b]) swap(a,b);
    par[b] = a;
    sz[a] += sz[b];
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
        memset(sz, 1, sizeof sz);
        for(int i = 1; i<=v; i++)
        {
            par[i] = i;
        }
        for(int i = 0; i<=1001; i++)
        {
            edge[i].clear();
        }
        int check = 0;
        for(int i = 1; i<=e; i++)
        {
            int x, y;
            cin  >> x >> y;
            if(Union(x, y) == false)
            {
                check = 1;
            }
        }
        if(check)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
        
    }   
}
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int sz[1001], par[1001];
int v, e;

struct edge{
    public:
        int x, y, w;
};
vector<edge> a;

int find(int u)
{
    if(u==par[u]) return u;
    return par[u] = find(par[u]);
}

bool Union(int c, int d)
{
    c = find(c);
    d = find(d);
    if(c==d) return false;
    if(sz[c] < sz[d]) swap(c, d);
    par[d] = c;
    sz[c] += sz[d];
    return true;
}

bool cmp(edge a, edge b)
{
    return a.w < b.w;
}

void Kruskal()
{
    sort(begin(a), end(a), cmp);
    int ans = 0;
    vector<edge> tree;
    for(int i = 0; i<e; i++)
    {
        if(tree.size() == v-1) break;
        if(Union(a[i].x, a[i].y))
        {
            ans += a[i].w;
            tree.push_back(a[i]);
        }
    }
    cout << ans << endl;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        for(int i = 1; i<=1001; i++)
        {
            par[i] = i;
            sz[i] = 1;
        }
        a.clear();
        cin >> v >> e;
        for(int i = 1; i<=e; i++)
        {
            int n, m, k;
            cin >> n >> m >> k;
            a.push_back({n, m, k});
        }
        Kruskal();
    }   
}
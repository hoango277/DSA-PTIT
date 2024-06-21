#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];
bool vs[1001];
int par[1001];
int check = 1;
int ans = -1;

void dfs(int u)
{
    vs[u] = 1;
    for(int i : edge[u])
    {   
        if(!vs[i])
        {
            par[i] = u;
            dfs(i);
        }
        else if(i==1 && par[u] != 1 && !check)
        {
            ans = u;
            check = 1;
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
        check = 0;
        int v1, e;
        cin >> v1 >> e;
        memset(par, 0, sizeof par);
        memset(vs, 0, sizeof vs);
        for(int i = 0; i<1001; i++)
            edge[i].clear();
        for(int i = 1; i<=e; i++)
        {
            int x,y ;
            cin >> x >> y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        for(int i = 1; i<=v1; i++)
        {
            sort(edge[i].begin(), edge[i].end());
        }
        dfs(1);
        if(!check)
            cout << "NO";
        else
        {
            stack<int> st;
            st.push(1);
            while(ans != 1)
            {
                st.push(ans);
                ans = par[ans];
            }
            st.push(1);
            while(st.size())
            {
                cout << st.top() << ' ';
                st.pop();
            }

        }
        cout << endl;
    }   
}
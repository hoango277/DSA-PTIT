#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
vector<int> edge[1001];
       int v, e;

int check()
{
    int cnt = 0;
    for(int i = 1; i<=v ;i++)
    {
        if(edge[i].size() % 2)
            cnt++;
    }
    if(cnt == 0)
        return 2;
    if(cnt == 2)
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        for(int i = 0; i<1001; i++)
            edge[i].clear();
        for(int i = 0; i<e; i++)
        {
            int x, y;
            cin >> x >>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        cout << check() << endl;
    }   
}
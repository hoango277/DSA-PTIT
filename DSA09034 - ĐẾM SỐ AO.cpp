#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int dx[8] = {-1,-1,-1,0,1,1,1,0};
int dy[8] = {-1,0,1,1,1,0,-1,-1};
int n, m;
int a[1005][1005];
bool b[1005][1005];

bool isSafe(int x, int y)
{
    if(x>=1 && x<=n && y>=1 && y<=m)
        return 1;
    return 0;
}

void dfs(int x, int y)
{
    for(int i = 0; i<8; i++)
    {
        int x1 = x+dx[i];
        int y1 = y+dy[i];
        if(isSafe(x1, y1) && !b[x1][y1] && a[x1][y1] == 1)
        {
            b[x1][y1] = 1;
            dfs(x1, y1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t = 1;
    // cin >> t;
    while(t--)
    {
        cin >> n >> m;   
        memset(b, 0, sizeof b);
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
             {
                char x;
                cin >> x;
                if(x=='W')
                {
                    a[i][j] = 1;
                }
                else
                    a[i][j] = 0;
             }
        }
        int dem = 0;
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=m; j++)
            {
                if(!b[i][j] && a[i][j] == 1)
                {
                    dem++;
                    b[i][j] == true;
                    dfs(i, j);
                }
            }
        }
        cout << dem << endl;
    }   
}

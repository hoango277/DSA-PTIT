#include <bits/stdc++.h>
using namespace std;
int n;
int a[15][15];
string ans="";
bool check;

int dx[4] = {1,0,0,-1};
int dy[4] = {0,-1,1,0};
string tmp = "DLRU";

void Try(int i, int j)
{
    if(i == n && j == n)
    {
        check = 1;
        cout << ans << ' ';
    }
    for(int k = 0; k<=3; k++)
    {
        if(a[i+dx[k]][j+dy[k]] == 1 && i+dx[k] >= 1 && i+dx[k]<=n && j+dy[k]>=1 && j+dy[k] <=n)
        {
            a[i+dx[k]][j+dy[k]] = 0;
            ans+=tmp[k];    
            Try(i+dx[k],j+dy[k]);
            a[i+dx[k]][j+dy[k]] = 1;
            ans.pop_back();
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = 0;
        cin >> n;
        for(int i = 1; i<=n; i++)
        {
            for(int j = 1; j<=n; j++) cin >> a[i][j];
        }
        if(a[1][1] && a[n][n])
        {
            a[1][1] = 0;
            Try(1,1);
        }
        if(!check)
            {
                cout << "-1";
            }
        cout << endl;
    }
}
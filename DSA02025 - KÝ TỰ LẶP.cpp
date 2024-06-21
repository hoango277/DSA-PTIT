#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
bool used[1001];
vector<string> v;
int a[15];
int ans = 1e9;

int check(string& a, string& b)
{
    int cnt1 = 0;
    for(char i : a)
    {
        for(char j : b)
        {
            if(i==j)
            {
                cnt1++;
            }
        }
    }
    return cnt1;
}



void Try(int i, int cnt)
{
    if(i==n+1)
    {
        ans = min(cnt, ans);
    }
    for(int j = 1; j<=n; j++)
    {
        if(!used[j])
        {
            a[i] = j;
            used[j] = 1;
            if(cnt < ans)
                Try(i+1, cnt + check(v[a[i]], v[a[i-1]]));
            used[j] = 0;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;
    v.resize(n+1);
    memset(a, 0, sizeof a);
    v[0] = "";
    memset(used, 0, sizeof used);
    ans = 1e9;
    for(int i = 1; i<=n; i++)
    {
        cin >> v[i];
    }
    Try(1, 0);
    cout << ans;
}
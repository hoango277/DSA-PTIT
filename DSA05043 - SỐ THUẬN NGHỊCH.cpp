#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        s = " " + s;
        bool f[1005][1005];
        for(int i = 1; i<=n; i++)
        {
            f[i][i] = 1;
        }
        int ans = 1;
        for(int len = 2; len<=n; len++)
        {
            for(int i = 1; i<=n-len+1; i++)
            {
                int j = i+len-1;
                if(len == 2)
                {
                    f[i][j] = (s[i] == s[j]);
                }
                else
                    f[i][j] = (s[i] == s[j]) && f[i+1][j-1];
                if(f[i][j])
                {
                    ans = max(ans, len);
                }
            }
        }
        cout << ans << endl;
    }
}

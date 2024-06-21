#include <bits/stdc++.h>
using namespace std;

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
        long long f[n+2];
        memset(f, 0, sizeof(f));
        for(int i = 1; i<=n; i++)
        {
            f[i] = f[i-1]*10 + i*(s[i]-'0');
        }
        long long sum = 0;
        for(int i = 1; i<=n; i++)
        {
            sum += f[i];
        }
        cout << sum << endl;
    }
}
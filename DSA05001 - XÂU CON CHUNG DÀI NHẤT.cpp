#include <bits/stdc++.h>
using namespace std;

int f[1001][1001];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        s1 = " " + s1;
        s2 = " " + s2;
        int res = 0;
        for(int i = 1; i<s1.size(); i++)
        {
            for(int j = 1; j< s2.size(); j++)
            {
                if(s1[i] == s2[j])
                {
                    f[i][j] = f[i-1][j-1] + 1;
                }
                else
                    f[i][j] = max(f[i-1][j], f[i][j-1]);
                res = max(res, f[i][j]);
            }
        }
        cout << res << endl;
    }
}
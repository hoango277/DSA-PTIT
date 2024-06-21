#include<bits/stdc++.h>
using namespace std;

bool check(string& s, int n)
{
    for(int i = 1; i<=n; i++)
    {
       if(s[i] == 'A' || s[i] == 'E')
       {
            if(i!=1 && i!=n)
            {
                if(s[i-1] != 'A' && s[i-1] != 'E' && s[i+1] != 'A' && s[i+1] != 'E')
                    return 0;
            }
       }
    }
    return 1;
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--)
    {
        char s;
        cin >> s;
        string v = "0";
        for(int i = 0; i<=s-'A'; i++)
        {
            v += 'A'+i;
        }
        v+="0";
        int n = s+-'A'+1;
        do
        {
            if(check(v, n))
            {
                for(int i = 1; i<=n; i++)
                {
                    cout << v[i];
                }
                cout << endl;
            }
        } while (next_permutation(v.begin()+1, v.end()-1));
        
    }   
}
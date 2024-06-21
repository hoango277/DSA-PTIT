#include<bits/stdc++.h>
using namespace std;

bool check(string& s)
{
    for(int i = 0; i<s.size()-1; i++)
    {
        if(s[i] < s[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int check1 = 1;
        if(check(s))
        {
            check1 = 0;
        }
        else
            next_permutation(s.begin(), s.end());
        if(check1)
        {
            cout << x << ' ' << s;
        }
        else
           cout << x << " BIGGEST";
        cout << endl;
    }   
}

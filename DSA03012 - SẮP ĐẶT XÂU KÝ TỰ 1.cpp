#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map <char, int> m;
        int max1 = -1;
        for(int i = 0; i<s.size(); i++)
        {
            m[s[i]]++;
            max1 = max(max1, m[s[i]]);
        }
        if(max1 - 1 <= s.size()-max1)
        {
            cout << "1";
        }
        else   
            cout << "-1";
        cout << endl;

    }
}
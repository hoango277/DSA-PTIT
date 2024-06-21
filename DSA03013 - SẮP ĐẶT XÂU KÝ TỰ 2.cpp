#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> m;
        bool ok = 0;
        int max1 = -1;
        for(int i = 0; i<s.size(); i++)
        {
            m[s[i]]++;
            max1 = max(max1, m[s[i]]);
        }
        if((max1-1)*n <= s.size()-1)
        {
            cout << "1";
            ok = 1;
        }
        if(!ok)
            cout << "-1";
        cout << endl;

        
   }
}
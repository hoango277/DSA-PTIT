#include<bits/stdc++.h>
using namespace std;
string s;
string ans = "";
vector<int> check;



void Try(int i)
{
    for(int j = 0; j<s.size(); j++)
    {
        if(check[j] == 0)
        {
            ans+=s[j];
            check[j] = 1;
            if(i == s.size()-1)
            {
                cout << ans << ' ';
            }
            else
                Try(i+1);
            check[j] = 0;
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
        cin >> s;
        check.resize(s.size());
        Try(0);
        cout << endl;
   }
}
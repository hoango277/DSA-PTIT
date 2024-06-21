#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> v;
    string s;
    while(t--)
    {  
        cin >> s;
    {
        if(s=="PUSH")
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s=="PRINT")
        {
            if(v.size())
                cout << v[v.size()-1] << ' ';
            else
                cout << "NONE";
            cout << endl;
        }
        else
        {
            if(v.size())
                v.pop_back();
        }
            
    }
    }
}
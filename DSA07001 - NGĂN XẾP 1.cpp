#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<int> v;
    while(cin >> s)
    {
        if(s=="push")
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        else if(s=="show")
        {
            if(v.size())
            for(int i = 0; i<v.size(); i++)
            {
                cout << v[i] << ' ';
            }
            else
                cout << "empty";
            cout << endl;
        }
        else
            v.pop_back();
    }
}
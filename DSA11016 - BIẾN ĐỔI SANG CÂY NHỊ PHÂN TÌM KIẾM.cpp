#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        set<long long> se;
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp = "";
        while(ss >> tmp)
        {
            long long x = stoll(tmp) ;
            se.insert(x);
            ss >> tmp;
            long long y = stoll(tmp);
            se.insert(y);
            ss >> tmp;
        }
        for(auto i : se)
            cout << i << ' ';
        cout << endl;
    }   
}
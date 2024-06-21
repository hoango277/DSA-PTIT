#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        stack<string> st;
        while(ss >> s)
        {
            st.push(s);
        }
        while(st.size())
        {
            cout << st.top() << ' ';
            st.pop();
        }
        cout << endl;
    }
}
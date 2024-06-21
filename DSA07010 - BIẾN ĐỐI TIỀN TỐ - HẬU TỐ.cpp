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
        stack<string> st;
        string tmp = "";
        for(int i = s.size()-1; i>=0; i--)
        {
            if(isalpha(s[i]))
            {
                tmp = s[i];
                st.push(tmp);
                tmp = "";
            }
            else
            {
                tmp += st.top();
                st.pop();
                tmp += st.top();
                st.pop();
                tmp += s[i];
                st.push(tmp);
                tmp = "";
            }
        }
        cout << st.top() << endl;
    }
}
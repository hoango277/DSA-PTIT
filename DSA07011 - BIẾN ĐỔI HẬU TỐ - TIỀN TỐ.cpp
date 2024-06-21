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
        for(int i = 0; i<s.size(); i++)
        {
            if(isalpha(s[i]))
            {
                tmp = s[i];
                st.push(tmp);
                tmp = "";
            }
            else
            {
                string x = st.top();
                st.pop();
                string y = st.top();
                st.pop();
                tmp += s[i] + y + x ;
                st.push(tmp);
                tmp = "";
            }
        }
        cout << st.top() << endl;
    }
}
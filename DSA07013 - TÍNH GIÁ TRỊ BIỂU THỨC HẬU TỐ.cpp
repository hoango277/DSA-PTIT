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
        stack<int> st;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] <= '9' && s[i] >= '0')
            {
                int x = s[i] - '0';
                st.push(x);
            }
            else
            {
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                int z;
                if(s[i] == '-')
                    z = y-x;
                else if(s[i] == '+')
                    z = y+x;
                else if(s[i] == '*')
                    z = y*x;
                else if(s[i] == '/')
                    z = y/x;
                else if(s[i] == '^')
                    z = y^x;
                st.push(z);
            }
        }
        cout << st.top() << endl;
    }
}
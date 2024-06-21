#include <bits/stdc++.h>
using namespace std;

int prio(char c) {
    if (c == '^') return 4;
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
            }
            else if(isalpha(s[i]))
                cout << s[i];
            else if(s[i] == ')')
            {
                while(st.size() && st.top() != '(')
                {
                    cout << st.top();
                    st.pop();
                }
                st.pop();
            }
            else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^')
            {
                while(st.size() && prio(s[i]) <= prio(st.top()))
                {
                    cout << st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(st.size())
        {
            if(st.top()!='(') cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;      
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for(int i: s)
        {
            if(i == '(')
                st.push(i);
            else if(i=='{')
                st.push(i);
            else if(i=='[')
                st.push(i);
            else if(st.size() && st.top() == '(' && i == ')')
                st.pop();
            else if(st.size() && st.top() == '[' && i == ']')
                st.pop();
            else if(st.size() && st.top() == '{' && i == '}')
                st.pop();
        }
        if(st.size())
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}
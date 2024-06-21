#include <bits/stdc++.h>
using namespace std;

bool check(char s)
{
    if(s == '+' || s == '-' || s == '/' || s == '*')
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    scanf("\n");
    while(t--)
    {
        string s;
        getline(cin, s);
        stack<char> st;
        bool ans = 1;
        for(char i : s)
        {
            if(i == '(')
            {
                st.push(i);
            }
            else if(check(i))
            {
                st.push(i);
            }
            else if (i == ')')
            {
                if(st.top() == '(')
                {
                    ans = 0;
                    break;
                }
                else 
                {
                    while(st.size() && st.top() != '(')
                    {
                        st.pop();
                    }
                    if(st.size())
                    {
                        st.pop();
                    }
                }
            }
        }
        if(!ans)
            cout << "Yes";
        else 
            cout << "No ";
        cout << endl;
    }
}
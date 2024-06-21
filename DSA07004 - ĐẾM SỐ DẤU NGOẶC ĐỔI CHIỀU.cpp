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
        int cnt = 0;
        for(char i : s)
        {
            if (i == ')')
            {
                if(st.size() && st.top() == '(')
                    st.pop();
                else
                {
                     st.push('(');
                     cnt++;
                }
            }
            else
                st.push(i);
        }
        cout << cnt + st.size()/2 << endl;
    }
}
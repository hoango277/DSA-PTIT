#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    string s;
    cin >> s;
    string ans = "";
    stack<char> st;
    for(int i = 0; i<s.size(); i++ )
    {
        if(s[i] == '<')
        {
            if(ans.size())
            {
                st.push(ans.back());
                ans.pop_back();
            }
        }
        else if(s[i]=='-')
        {
            if(ans.size())
            {
                ans.pop_back();
            }
        }
        else if(s[i]=='>')
        {
            if(st.size())
            {
                ans+=st.top();
                st.pop();
            }
        }
        else
            ans += s[i];
    } 
    while(st.size())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
}
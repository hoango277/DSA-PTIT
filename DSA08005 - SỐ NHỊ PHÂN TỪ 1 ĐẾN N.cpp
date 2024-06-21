#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        stack<int> st;
        queue<string> q;
        q.push("1");
        while(n)
        {
            st.push(n%2);
            n/=2;
        }
        string s = "";
        while(st.size())
        {
            s+= to_string(st.top());
            st.pop();
        }
        while(1)
        {
                cout << q.front() << ' ';
                if(q.front() == s)
                    break;
                else
                {
                    q.push(q.front()+"0");
                    q.push(q.front()+"1");
                    q.pop();
                }
        }
        cout << endl;
    }     
}   
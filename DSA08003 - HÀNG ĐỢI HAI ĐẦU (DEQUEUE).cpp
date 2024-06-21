#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    deque<int> dq;
    string s;
    while(t--)
    {
        cin >> s;
        if(s == "PUSHBACK")
        {
            int n;
            cin >> n;
            dq.push_back(n);
        }
        else if ( s == "PUSHFRONT")
        {
            int n;
            cin >> n;
            dq.push_front(n);
        }
        else if (s == "PRINTFRONT")
        {
            if(dq.size())
            {
                cout << dq.front() << '\n';
            }
            else
                cout << "NONE\n";
        }
        else if (s== "PRINTBACK")
        {
            if(dq.size())
            {
                cout << dq.back() << '\n';
            }
            else
                cout << "NONE\n";
        }
        else if (s=="POPFRONT")
        {
            if(dq.size())
                dq.pop_front();
        }
        else
            if(dq.size())
            {
                dq.pop_back();
            }
    }   
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string x;
    queue<int> q;
    while(t--)
    {
        cin >> x;
        if(x=="PUSH")
        {
            int a;
            cin >> a;
            q.push(a);
        }
        else if(x=="POP")
        {
            if(q.size())
                q.pop();
        }
        else
            if(q.size())
            {
                cout << q.front() << endl;
            }
            else
                cout << "NONE\n";
    }   
}
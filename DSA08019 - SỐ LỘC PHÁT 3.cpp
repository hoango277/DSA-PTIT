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
        queue<string> q;
        vector<string> res;
        q.push("6");
        q.push("8");
        while(1)
        { 
            if(q.front().size() == n+1) 
                break;
            else
            {
                res.push_back(q.front());
                q.push(q.front()+"6");
                q.push(q.front()+"8");
                q.pop();
            }
        }
        cout << res.size() << endl;
        for(int i = res.size() - 1; i>=0; i--)
            cout << res[i] << ' ';
        cout << endl;
    }   
}
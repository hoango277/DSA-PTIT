#include<bits/stdc++.h>
using namespace std;
long long a[100005];

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long s, t;
        cin >> s >> t;
        queue<long long> q;
        q.push(s);
        memset(a, 0, sizeof(a));
        while(1)
        {
            if(q.front() == t)
            {
                break;
            }
            int x = q.front();
            q.pop();
            if(!a[x-1] && x-1 >= 0 && x-1 < 100005)
            {
                a[x-1] = a[x]+1;
                q.push(x-1);
            }
            if(!a[x*2] && x*2 < 100005 && x*2 >= 0)
            {
                a[x*2] = a[x]+1;
                q.push(x*2);
            }
        }
        cout << a[t] << "\n";
    }   
}
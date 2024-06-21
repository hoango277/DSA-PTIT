#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        queue<long long> q;
        int cnt = 0;
        q.push(1);
        while(1)
        {
            if(q.front() < n)
            {
                cnt++;
                q.push(q.front()*10);
                q.push(q.front()*10+1);
                q.pop(); 
            }
            if(q.front() == n)
            {    
                cnt++;
                break;
            }
            else if(q.front() > n)
            {
                break;
            }
            
        }
        cout << cnt << endl;
       
    }     
}   
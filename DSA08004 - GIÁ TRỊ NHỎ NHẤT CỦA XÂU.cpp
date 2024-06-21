#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long  k;
        cin >> k;
        string s;
        cin >> s;
        map<char, long long> mp;
        for(char x : s)
        {
            mp[x]++;
        }
        priority_queue<long long> pq;
        for(auto i : mp)
        {
            pq.push(i.second);
        }
        while(k--)
        {
            long long x = pq.top();
            pq.pop();
            --x;
            pq.push(x);
        }
        long long sum = 0;
        while(pq.size())
        {
            sum += pq.top()*pq.top();
            pq.pop();
        }
        cout << sum << "\n";
    }   
}
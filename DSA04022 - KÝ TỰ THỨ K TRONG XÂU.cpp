#include<bits/stdc++.h>
using namespace std;

char ok(long long n, long long k)
{
    if(k%2)
        return 'A';
    if(k == pow(2,n-1))
        return char('A'+n-1);
    if(k>pow(2, n-1))
        return ok(n-1, k-pow(2, n-1));
    else
        return ok(n-1, k);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << ok(n, k) << endl;
    }   
}
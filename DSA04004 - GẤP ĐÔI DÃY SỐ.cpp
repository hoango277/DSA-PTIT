#include <bits/stdc++.h>
using namespace std;

long long dayso(long long n, long long k)
{
    if(k%2) return 1;
    if(k == (long long)pow(2, n-1))
        return n;
    if(k>1LL*pow(2,n-1))
        return dayso(n-1,k - 1LL*pow(2,n-1));
    else
        return dayso(n-1,k);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << dayso(n, k) << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
long long n, k;
int mod = 1e9+7;

long long Pow(long long n, long long k)
{
    if(k==0) return 1;
    if(k==1) return n%mod;
    long long x = Pow(n, k/2);
    long long y = x%mod*x%mod;
    if(k%2)
        return y%mod*n%mod;
    return y%mod;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        cout << Pow(n, k) << endl;
    }
}

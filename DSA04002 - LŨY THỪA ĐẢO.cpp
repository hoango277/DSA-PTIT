#include <bits/stdc++.h>
using namespace std;
long long n, k;
int mod = 1e9+7;

long long Pow(long long n, long long k)
{
    if(k==0) return 1;
    long long x = Pow(n, k/2);
    if(k%2==0)
        return (x*x)%mod;
    return (n*((x*x)%mod))%mod;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x;
        cin >> x;
        n = x;
        k = 0;
        while(x)
        {
            k*=10;
            k+=x%10;
            x/=10;
        }
        cout << Pow(n, k) << endl;
    }
}
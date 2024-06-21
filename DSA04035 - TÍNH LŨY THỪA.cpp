#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

long long powMod(long long x, long long y)
{
    if(y==0) return 1;
    if(y==1) return x%mod;
    long long z = powMod(x, y/2);
    if(y%2)
        return (x*(z%mod*z%mod))%mod;
    else
        return (z%mod*z%mod)%mod;
}

int main()
{
    while(1)
    {
        long long x, y;
        cin >> x >> y;
        if(!x && !y)
            break;
        else
            cout << powMod(x, y) << endl;
    }
}
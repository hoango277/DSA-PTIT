#include<bits/stdc++.h>
using namespace std;

long long mod = 123456789;

long long Pow(long long n, long long k)
{
    if(k==0) return 1;
    long long x = Pow(n, k/2);
    if(k%2)
        return (n*(x*x)%mod)%mod;
    return (x*x)%mod; 
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << Pow(2, n-1) << endl;
    }   
}
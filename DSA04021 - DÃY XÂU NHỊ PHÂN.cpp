#include<bits/stdc++.h>
using namespace std;
long long f[100];

void fibo()
{
    f[0] = 0;
    f[1] = 1;
    for(int i = 2; i<100; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
}

int bin(long long n, long long k)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(k>f[n-2])
        return bin(n-1, k-f[n-2]);
    else
        return bin(n-2, k);
}

int main()
{
    fibo();
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        cout << bin(n, k) << endl;
    }   
}
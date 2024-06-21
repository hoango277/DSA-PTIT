#include <bits/stdc++.h>
using namespace std;
long long a[100];

void fibo()
{
    a[1] = a[2] = 1;
    for(int i = 3; i<=100; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
}

char fiboo(long long i, long long n)
{
    if(n==1) return 'A';
    if(n==2) return 'B';
    if(i<=a[n-2])
    {
        return fiboo(i, n-2);
    }
    else 
        return fiboo(i-a[n-2], n-1);
}


int main()
{
    fibo();
    int t;
    cin >> t;
    while(t--)
    {
        long long n, i;
        cin >> n >> i;
        cout << fiboo(i, n) << endl;
    }
}
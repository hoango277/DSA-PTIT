#include<bits/stdc++.h>
using namespace std;
long long n, k;
long long mod = 1e9+7;

struct Matrix{
    long long f[15][15];
    friend Matrix operator * (Matrix a, Matrix b);
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix c;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            c.f[i][j] = 0;
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            for(int k = 0; k<n; k++)
            {
                c.f[i][j] += a.f[i][k] * b.f[k][j];
                c.f[i][j] %= mod;
            }
        }
    }
    return c;
}


Matrix powMod(Matrix a, long long k)
{
    if(k==1) return a;
    Matrix c = powMod(a, k/2);
    if(k%2)
        return c*c*a;
    else
        return c*c;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Matrix a;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cin >> a.f[i][j];
            }
        }
        Matrix s = powMod(a, k);
        long long sum = 0;
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<n; j++)
            {
                cout << s.f[i][j] << ' ';
            }
            cout << endl;
        }
    }   
}
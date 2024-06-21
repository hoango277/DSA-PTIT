#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;

struct Matrix{
    long long f[15][15];
    friend Matrix operator * (Matrix a, Matrix b);
};

Matrix operator * (Matrix a, Matrix b)
{
    Matrix c;
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            c.f[i][j] = 0;
        }
    }
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            for(int k = 0; k<2; k++)
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
        int x;
        cin >> x;
        Matrix a;
        a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
        a.f[1][1] = 0;
        Matrix s = powMod(a, x);
        cout << s.f[0][1] << endl;
        
    }   
}
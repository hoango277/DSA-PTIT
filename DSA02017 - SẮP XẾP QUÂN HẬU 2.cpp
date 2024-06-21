#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int x[100], d1[100], d2[100], cot[100];
int a[100][100];
int res = -1;

void ktao()
{
    for(int i = 1; i<=8; i++)
    {
        for(int j = 1; j<=8; j++) cin >> a[i][j];
    }
    memset(cot, 0, 100);
    memset(x,0,100);
    memset(d1,0,100);
    memset(d2,0,100);
}

void Try(int i)
{
    for(int j = 1; j<=8; j++)
    {
        if(!d1[i-j+8] && !d2[i+j-1] && !cot[j])
        {
            x[i] = j;
            d1[i-j+8] = 1;
            d2[i+j-1] = 1;
            cot[j] = 1;
            if(i == 8)
            {
                int sum = 0;
                for(int k = 1; k<=8; k++)
                {
                    sum += a[k][x[k]];
                }
                res = max(sum, res);
            }
            else
                Try(i+1);
            d1[i-j+8] = 0;
            d2[i+j-1] = 0;
            cot[j] = 0;
        }
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        res = -1;
        ktao();
        Try(1);
        cout << res << endl;
    }
}
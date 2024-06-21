#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int x[100], d1[100], d2[100], cot[100];

void ktao()
{
    memset(cot, 0, 100);
    memset(x,0,100);
    memset(d1,0,100);
    memset(d2,0,100);
}

void Try(int i)
{
    for(int j = 1; j<=n; j++)
    {
        if( !d1[i-j+n] && !d2[i+j-1] && !cot[j])
        {
            x[i] = j;
            d1[i-j+n] = 1;
            d2[i+j-1] = 1;
            cot[j] = 1;
            if(i == n)
            {
                cnt++;
            }
            else
                Try(i+1);
            d1[i-j+n] = 0;
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
        cnt = 0;
        ktao();
        cin >> n;
        Try(1);
        cout << cnt << endl;
    }
}
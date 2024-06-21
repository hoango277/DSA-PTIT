#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n,k;
int a[1000];

void Try(int i, int target)
{
    for(int j = 1; j<=n+1; j++)
    {
        if(j>=target)
        {
            a[i] = j;
            if(i == k)
            {
                for(int i = 1; i<=k; i++)
                {
                    cout << (char)(a[i]+'A'-1);
                }
                cout << endl;
            }
            else
                Try(i+1, j); 
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    char c;
    cin >> c;
    cin >> k;
    n = c - 'A' ;
    Try(1,-1);

}
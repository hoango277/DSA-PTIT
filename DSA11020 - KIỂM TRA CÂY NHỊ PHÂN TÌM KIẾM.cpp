#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int check(int a[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        if(a[i] >= a[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        cout << check(a, n) << endl;
    }   
}
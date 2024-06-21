#include<bits/stdc++.h>
using namespace std;

int Bin(int a[], int l, int r, int val)
{
    if(l>r)
        return -1;
    int mid = (l+r)/2;
    if(a[mid] == val)
        return mid;
    if(a[mid] < val)
        return Bin(a, mid+1, r, val);
    else
        return Bin(a, l, mid-1, val);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i<n; i++)
            cin >> a[i];
        int x = Bin(a,0, n-1, k);
        if(x == -1)
        {
            cout << "NO";
        }
        else
            cout << x+1;
        cout << "\n";
    }   
}
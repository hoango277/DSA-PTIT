#include<bits/stdc++.h>
using namespace std;

long long merge(long long a[], long long l, long long r, long long mid)
{
    long long cnt = 0;
    vector<long long> x(a+l, a+mid+1);
    vector<long long> y(a+mid+1, a+r+1);
    long long i = 0, j = 0;
    while(i<x.size() && j < y.size())
    {
        if(x[i] <= y[j])
        {
            a[l] = x[i];
            l++;
            i++;
        } 
        else
        {
                cnt += x.size()-i;
               a[l] = y[j];
               l++;
               j++;
              
        }
    }
    while(i<x.size())
    {
        a[l] = x[i];
            l++;
            i++;
    }
    while(j<y.size())
    {
        a[l] = y[j];
               l++;
               j++;
    }
    return cnt;
}


long long mergeSort(long long a[], long long l, long long  r)
{
    long long dem = 0;
    if(l<r)
    {
    long long mid = (l+r)/2;
    dem  += mergeSort(a, l, mid);
    dem  += mergeSort(a, mid+1, r);
    dem +=merge(a, l, r, mid);
    }
    return dem;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for(long long &i : a) cin >> i;
        cout << mergeSort(a, 0, n-1);
        cout << endl;
    }   
}
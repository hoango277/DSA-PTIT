#include<bits/stdc++.h>
using namespace std;


int main()
{
      int n;
      cin >> n;
      long long sum = 1;
      int a[n];
      int x = 0;
      for(int i = 1; i<=n; i++)
      {
         sum*=i;
         cin >> a[i-1];
      }
      sort(a, a+n);
      while(sum--)
      {
         for(int i = 0; i<n; i++)
            cout << a[i] << ' ';
            cout << endl;            
         next_permutation(a, a+n);
      }
      cout<<endl;
   }
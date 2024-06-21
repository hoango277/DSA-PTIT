#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      long long sum = 1;
      int a[n];
      int x = 0;
      for(int i = 1; i<=n; i++)
      {
         sum*=i;
         a[x++] = i;
      }
      while(sum--)
      {
         for(int i = 0; i<n; i++)
            cout << a[i];
            cout<<' ';
         next_permutation(a, a+n);
      }
      cout<<endl;
   }
}
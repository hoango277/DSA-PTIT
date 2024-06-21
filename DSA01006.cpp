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
      vector <int> v;
      while(sum--)
      {
         for(int i = n-1; i>-1; i--)
         {
            v.push_back(a[i]);
         }
         next_permutation(a, a+n);
      }
      int check = n;
      for(int i = v.size()-1; i>-1; i--)
      {
         cout << v[i];
         check--;
         if(!check)
         {
            cout << ' ';
            check = n;
         }
      }
      cout << endl;
   }
}
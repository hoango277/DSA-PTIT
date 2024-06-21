#include<bits/stdc++.h>
using namespace std;


bool check(int a[], int n, int k)
{
   int ans = 1;
   for(int i = 1; i<=n-1; i++)
   {
      ans = 1;
      if(a[i] == 0)
      {
         int j = i+1;
         while(a[j] == 0 && j<=n)
         {
            ans++;
            j++;
         }
         if(ans > k)
            return 0;
      }
      if(ans == k)
         return 1;
   }
   return 0;
}

int main()
{
   int n,k;
   cin >> n >> k;
   int a[n+5] = {};
   vector<string> v;
   while(1)
   {
      if(check(a, n, k))
      {
         string tmp ="";
         for(int i = 1; i<=n; i++)
         {
            tmp += char(a[i] + 'A');
         }
         v.push_back(tmp);
      }
      int l = n;
      while(a[l] == 1 && l)
      {
         a[l] = 0;
         l--;
      }
      if(l==0)
      {
         break;
      }
      else
      {
         a[l] = 1;
      } 
   }
      cout << v.size();
      for(auto i : v)
      {
         cout << endl << i;
      }
}
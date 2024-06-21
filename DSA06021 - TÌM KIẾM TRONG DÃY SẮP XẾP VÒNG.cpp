#include<bits/stdc++.h>
using namespace std;
map<int, int> m;

bool cmp(int a, int b)
{
   if(m[a] == m[b])
   {
      return a<b;
   }
   return m[a] > m[b];
}


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, x;
      cin >> n >> x;
      int a[n+1];
      int check = 1;
      for(int i = 0; i<n; i++)
      {
         cin >> a[i];
         if(x == a[i] && check)
         {
            check = 0;
            cout << i+1 << endl ; 
         }
      }
   }
}
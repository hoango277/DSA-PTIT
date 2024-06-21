#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
   int n;
   cin >> n;
   int a[n];
   map<int, int> m;
   for(int i = 0; i<n; i++)
   {
      cin >> a[i];
      m[a[i]]++;
   }
   bool check = 1;
   for(auto i : m)
   {
      if(i.second > int(n/2))
      {
         check = 0;
         cout << i.first;
      }
      if(!check)
         break;
   }
   if(check)
      cout << "NO";
   cout << endl; 
}
}
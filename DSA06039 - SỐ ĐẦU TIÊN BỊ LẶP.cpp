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
      int check = 0;
      for(int i = 0; i<n; i++)
      {
         cin >> a[i];
         m[a[i]]++;
      }
      for(int i = 0; i<n; i++)
      {
         if(m[a[i]] > 1)
         {
            check = 1;
            cout << a[i];
            break;
         }
      }
      if(!check)
      {
         cout << "NO";
      }
      cout << endl;
   }
}
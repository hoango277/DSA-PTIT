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
      vector<long long> a(n+1, 0);
      for(int i = 0; i<n; i++)  cin >> a[i];
      int ans = 0;
      for(int i = 1; i<n; i++)
      {
         if(a[i] < a[i-1])
         {
            ans = i;
            break;  
         }
      }
      cout << ans << endl;
   }
}
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
      int a[n];
      int b[100000] = {};
      for(int i = 0; i<n; i++) cin >> a[i];
      for(int i = 0; i<n; i++)
      {
         b[a[i]]++;
      }
      int l = *min_element(a, a+n);
      int r = *max_element(a, a+n);
      int cnt = 0;
      for(int i = l; i<=r; i++)
      {
         if(b[i] == 0)
            cnt++;
      }
      cout << cnt << endl;
   }
}
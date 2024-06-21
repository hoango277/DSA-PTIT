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
      int l, r;
      vector<int> a, b;
      a.resize(n);
      for(int &i : a) cin >> i;
      b = a;
      sort(a.begin(), a.end());
      for(int i = 0; i<n; i++)
      {
         if(a[i] != b[i])
         {
            l = i;
            break;
         }
      }
      for(int i = n-1; i>=0; i--)
      {
         if(a[i] != b[i])
         {
            r = i;
            break;
         }
      }
      cout << l+1 << ' ' << r+1 << endl;
   }
}

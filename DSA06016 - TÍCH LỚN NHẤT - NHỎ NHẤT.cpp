#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, m;
      cin >> n >> m;
      long long a[n], b[m];
      for(long long &i: a) cin >> i;
      for(long long &i : b) cin >> i;
      cout << *max_element(a, a+n) * *min_element(b, b+m) << endl;
   }
}
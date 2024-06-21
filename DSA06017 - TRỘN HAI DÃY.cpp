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
      vector<int> a;
      for(int i = 0; i<n+m; i++)
      {
         int x;
         cin >> x;
         a.push_back(x);
      }
      sort(a.begin(), a.end());
      for(int i = 0; i<a.size(); i++)
         cout << a[i] << ' ';
      cout << endl;
   }
}
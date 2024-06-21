#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, x;
      cin >> n >> x;
      int a[n];
      map<int,int> m;
      for(auto &i : a)
      {
         cin >> i;
         m[i]++;
      }
      if(m[x])
      {
         cout << m[x];
      } 
      else
         cout << "-1";
      cout << endl;
   }
}

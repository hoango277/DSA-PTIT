#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      string a;
      cin >> a;
      a = "0" + a;
      int l = a.size()-1;
      while(a[l] == '0' && l)
      {
         a[l] = '1';
         l--;
      }
      if(l==0)
      {
         for(int i = 1; i<a.size(); i++)
         {
            cout << a[i];
         }
      }
      else
      {
         a[l] = '0';
         for(int i = 1; i<a.size(); i++)
            cout << a[i];
      }
               cout << endl;
   }
}
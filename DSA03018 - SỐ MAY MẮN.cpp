#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      double n;
      cin >> n;
      bool check = 0;
      for(int i = floor(n/7); i>=0; i--)
      {
         int x = n-i*7;
         if(x%4==0)
         {
            for(int j = 0; j<x/4; j++)
            {
               cout << "4";
            }
            for(int j = 0; j<i; j++)
            {
               cout << "7";
            }
            check = 1;
         }
         if(check)
         {
            break;
         }
      }
      if(!check)
         cout << "-1";
      cout << endl;
   }
}
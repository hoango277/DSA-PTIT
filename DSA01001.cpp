#include<bits/stdc++.h>
using namespace std;

bool check(int a[], int n)
{
   int l = 1;
   int k = n;
   while(l<=k)
   {
      if(a[l] != a[k]) return 0;
      l++;
      k--;
   }
   return 1;
}

int main()
{
   int t;
   cin >> t;
   cin.ignore();
   while(t--)
   {
      string a;
      getline(cin, a);
      a = "0" + a;
      int l = a.size()-1;
      while(a[l] == '1' && l)
      {
         a[l] = '0';
         l--;
      }
      a[l] = '1';
      for(int i = 1; i<a.size(); i++)
      {
         cout << a[i];
      }
      cout << endl;
   }
}
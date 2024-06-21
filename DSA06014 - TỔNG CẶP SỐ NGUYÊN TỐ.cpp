#include<bits/stdc++.h>
using namespace std;
int a[1000005];

void sieve()
{
   for(int i = 2; i<=sqrt(1000000); i++)
   {
      for(long long j = i*i; j<=1000000; j+=i)
      {
         a[j] = 1;
      }
   }
}


int main()
{
   int t;
   cin >> t;
   sieve();
   while(t--)
   {
      int check = 0;
      int n;
      cin >> n;
      for(int i = 2; i<=n/2; i++)
      {
         if(!a[n-i] && !a[i])
         {
            check = 1;
            cout << i << ' ' << n-i;
            break;
         }
      }
      if(!check)
         cout << "-1";
      cout << endl;
   }
}
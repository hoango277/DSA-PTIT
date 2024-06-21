#include<bits/stdc++.h>
using namespace std;
long long n, x;
bool check;
long long ans = 1e18;
vector<long long> a;

void Try(long long sum, int i, long long cnt)
{
   if(sum == x)
   {
      check = 1;
      ans = min(cnt, ans);
   }
   for(int j = i; j<n; j++)
   {
      if(sum + a[j] <= x)
      {
         Try(sum + a[j], j+1, cnt+1);
      }
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      check = 0;
      cin >> n >> x;
      a.resize(n);
      for(int i = 0; i<n; i++) cin >> a[i];
      Try(0,0,0);
      if(check)
      {
         cout << ans;
      }
      else
         cout << "-1";
      cout << endl;
   }
}
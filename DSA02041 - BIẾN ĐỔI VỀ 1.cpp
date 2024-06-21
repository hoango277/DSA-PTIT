#include<bits/stdc++.h>
using namespace std;
int x;
int ans = 1e9;

void Try(int n,int cnt)
{
   if(n==1)
   {
      ans = min(cnt, ans);
      return;
   }
   if(n%3==0)
   {
      if(cnt < ans)
      Try(n/3, cnt+1);
   }
   if(n%2==0)
   {
      if(cnt < ans)
      Try(n/2, cnt+1);
   }
   if(cnt < ans)
   Try(n-1, cnt+1);
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      ans = 1e9;
      cin >> x;
      Try(x, 0);
      cout << ans << endl;
   }
}
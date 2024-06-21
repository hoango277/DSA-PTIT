#include <bits/stdc++.h>
using namespace std;
int a[1005];
int n, p, s;
vector<vector<int>> v;
vector<int> ans;

void sieve()
{
   memset(a, 0, 1005);
   for(int i = 2; i<=sqrt(1000); i++)
   {
      if(a[i] == 0)
      for(int j = i*i; j<1000; j+=i)
      {
         a[j] = 1;
      }
   }
}


void Try(int sum,int i)
{
   for(int j = i; j<=s; j++)
   {
      if(a[j] == 0)
      {
         sum += j;
         ans.push_back(j);
         if(sum == s && ans.size() == n)
         {
            v.push_back(ans);
         }
         else
         if(sum < s && ans.size() < n)
            Try(sum, j+1);
         sum -= j;
         ans.pop_back();
      }
   }
}


int main()
{
   sieve();
   int t;
   cin >> t;
   while(t--)
   {
      v.clear();
      ans.clear();
      cin >> n >> p >> s;
      Try(0,p+1);
      cout << v.size() << endl;
      for(int i = 0; i<v.size(); i++)
      {
         for(int j = 0; j<v[i].size(); j++)
         {
            cout << v[i][j] << ' ';
         }
         if(i != v.size()-1) cout << endl;
      }
      cout << endl;
   }
}
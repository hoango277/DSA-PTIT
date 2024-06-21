#include<bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<vector<int>> v;
vector<int> ans;

void Try(int sum, int limit)
{
   for(int i = 0; i<n; i++)
   {
      if(sum + a[i] <= k && a[i] >= limit)
      {
      sum += a[i];
      ans.push_back(a[i]);
      if(sum == k)
      {
         v.push_back(ans);
      }
      else
      {
         if(sum < k)
         {
            Try(sum,a[i]);
         }
      }
      sum -= a[i];
      ans.pop_back();
      }
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      cin >> n >> k;
      v.clear();
      ans.clear();
      a.resize(n);
      for(int i = 0; i<n; i++)
      {
         cin>>a[i];
      }
      Try(0, 1);
      if(v.size())
      {
      for(int i = 0; i<=v.size()-1; i++)
      {
         cout << '[';
         for(int j = 0; j<v[i].size(); j++)
         {
            cout << v[i][j];
            if(j != v[i].size() - 1) cout << ' ';
            else
               cout << "]";
         }
      }
      }
      else
         cout << "-1";
      cout << endl;
   }
}
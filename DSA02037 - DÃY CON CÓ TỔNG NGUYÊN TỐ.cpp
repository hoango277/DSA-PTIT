#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> tmp;
set<vector<int>> ans;

bool check(int n)
{
   if(n<2)  return 0;
   for(int i = 2; i<=sqrt(n); i++)
   {
      if(n%i==0)
         return 0;
   }
   return 1;
}

bool cmp(int a, int b)
{
   return a>b;
}

void Try(int sum,int i)
{
   for(int j = i; j>=0; j--)
   {
      sum += a[j];
      tmp.push_back(a[j]);
      if(check(sum))
      {
         vector<int> b(tmp.rbegin(), tmp.rend());
         ans.insert(b);
      }
      Try(sum, j-1);
      sum -= a[j];
      tmp.pop_back();
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      tmp.clear();
      ans.clear();
      cin >> n;
      a.resize(n);
      for(auto &i: a) cin >> i;
      sort(a.begin(), a.end(), cmp);
      Try(0,n-1);
      for(auto i : ans)
      {
         for(int j = 0; j<i.size(); j++)
         {
            cout << i[j] << ' ';
         }
         cout << endl;
      }
   }
}
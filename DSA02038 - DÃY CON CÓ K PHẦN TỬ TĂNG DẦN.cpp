#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<int> tmp;
set<vector<int>> ans;


bool cmp(int a, int b)
{
   return a>b;
}

void Try(int i)
{
   for(int j = i; j>=0; j--)
   {
      tmp.push_back(a[j]);
      if(tmp.size() == k)
      {
         ans.insert(tmp);
      }
      Try(j-1);
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
      cin >> n >> k;
      a.resize(n);
      for(auto &i: a) cin >> i;
      sort(a.begin(), a.end(), cmp);
      Try(n-1);
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
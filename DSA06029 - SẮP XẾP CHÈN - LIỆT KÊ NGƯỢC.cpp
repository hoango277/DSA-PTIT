#include<bits/stdc++.h>
using namespace std;
   int a[100000];
   int n;
string tmp;
vector<string> ans;
void display(int k)
{
   for(int i = 0; i<=k; i++)
      tmp += " " +  to_string(a[i]);
   ans.push_back(tmp);
}

int main()
{
      tmp.clear();
      ans.clear();
      cin >> n;
      for(int i = 0; i<n; i++) cin >> a[i];
      for(int i = 0; i<n; i++)
   {
      tmp = "";
      sort(a, a+i+1);
      tmp += "Buoc " + to_string(i) + ":";
      display(i);
   }
   for(int i = ans.size()-1; i>=0; i--)
   {
      cout << ans[i] << endl;
   }
   
}
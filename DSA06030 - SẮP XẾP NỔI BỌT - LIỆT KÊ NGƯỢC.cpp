#include<bits/stdc++.h>
using namespace std;
   int a[100000];
   int n;
string tmp;
vector<string> ans;
void display()
{
   for(int i = 0; i<n; i++)
      tmp += " " +  to_string(a[i]);
   ans.push_back(tmp);
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
      for(int i = 0; i<n; i++) cin >> a[i];
      for(int i = 1; i<n; i++)
   {
      tmp = "";
      int check = 0;
      for(int j = 0; j<n-i; j++)
      {
         if(a[j] > a[j+1])
         {
            check = 1;
            swap(a[j], a[j+1]);
         }
      }
      if(!check)
      {
         break;
      }
      
      tmp += "Buoc " + to_string(i) + ":";
      display();
   }
   for(int i = ans.size()-1; i>=0; i--)
   {
      cout << ans[i] << endl;
   }
   }
}
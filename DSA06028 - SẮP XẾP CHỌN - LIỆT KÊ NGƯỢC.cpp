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
      tmp.clear();
      ans.clear();
      cin >> n;
      for(int i = 0; i<n; i++) cin >> a[i];
      for(int i = 0; i<n-1; i++)
   {
      tmp = "";
      int min = i;
      for(int j = i+1; j<n; j++)
      {
         if(a[j] < a[min])
         {
            min = j;
         }
      }
      swap(a[min], a[i]);
      tmp += "Buoc " + to_string(i+1) + ":";
      display();
   }
   for(int i = ans.size()-1; i>=0; i--)
   {
      cout << ans[i] << endl;
   }
   
}
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int sum = 0;
int ans = 0;
int check;

void Try(int i)
{
   for(int j = i; j<n; j++)
   {
      ans+= a[j];
      if(ans == sum){
         check = 1;
      }
      else if(check == 0)
         Try(j+1);
      ans -= a[j];
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      check = 0;
      sum = 0;
      ans = 0;
      cin >> n;
      a.resize(n);
      for(int &i: a)
      {
         cin >> i;
         sum += i;
      }
      if(sum%2)
      {
         check = 0;
      }
      else
         Try(0);
      if(check)
         cout << "YES";
      else 
         cout << "NO";
      cout << endl;
   }
}
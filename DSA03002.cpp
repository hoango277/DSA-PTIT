#include <bits/stdc++.h>
using namespace std;

int main()
{
   string s1, s2;
   cin >> s1 >> s2;
   for(auto &i : s1)
   {
      if(i == '6')
         i='5';
   }
    for(auto &i : s2)
   {
      if(i == '6')
         i='5';
   }
   cout << stoll(s1) + stoll(s2) << ' ';
   for(auto &i : s1)
   {
      if(i == '5')
         i='6';
   }
    for(auto &i : s2)
   {
      if(i == '5')
         i='6';
   }
    cout << stoll(s1) + stoll(s2);

}
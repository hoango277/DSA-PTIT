#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100];
double sum;
int check;

void Try(int sum1,int i)
{
   if(sum1 == sum)
   {
      check = 1;
      return;
   }
   for(int j = i; j<n; j++)
   {
      if(sum1 + a[j] <= sum)
      {
         Try(sum1+ a[j], j+1);
      }
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
      cin >> n >> k;
      for(int i = 0; i<n; i++)
      {
         cin >> a[i];
         sum += a[i];
      }
      sum /= k;
      if(int(sum)*k == sum * k)
      {
         Try(0,0);
         if(check)
         {
            cout << '1';
         }
      } 
      if(!check)
         cout << "0";
      cout << endl;
   }
}
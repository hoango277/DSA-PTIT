#include<bits/stdc++.h>
using namespace std;
int n;
int b[100];
int c[100];

bool check()
{
   for(int i = 1; i<n; i++)
   {
      if(b[i] == 0)
         return 0;
      if(abs(b[i]-b[i+1]) == 1)
         return 0;
   }
   return 1;
}

void print()
{
   for(int i = 1; i<=n; i++)
      cout << b[i];
   cout << endl;
}


void Try(int i)
{
   for(int j = 1; j<=n; j++)
   {
      if(c[j] == 0)
      {
         b[i] = j;
         c[j] = 1;
         if(i==n)
         {
         if(check())
         {
            print();
         }
      }
      else
         Try(i+1);
         c[j] = 0;
      }
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      cin >> n;
      Try(1);
      cout << endl;
   }
}
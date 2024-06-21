#include<bits/stdc++.h>
using namespace std;
   int a[100000];
   int n;

void display()
{
   for(int i = 0; i<=n-1; i++)
      cout << " " << a[i];
   cout << endl;
}


int main()
{
   cin >> n;
   for(int i = 0; i<n; i++) cin >> a[i];
   for(int i = 1; i<n; i++)
   {
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
      
      cout << "Buoc " << i << ":";
      display();
      
   }

}
#include<bits/stdc++.h>
using namespace std;
   int a[100000];
   int n;

void display()
{
   for(int i = 0; i<n; i++)
      cout << " " << a[i];
   cout << endl;
}

int main()
{
   cin >> n;
   for(int i = 0; i<n; i++) cin >> a[i];
   for(int i = 0; i<n-1; i++)
   {
      for(int j = i+1; j<n; j++)
      {
         if(a[i] > a[j])
            swap(a[i], a[j]);
      }
      cout << "Buoc " << i+1 << ":";
      display();
   }
}
#include<bits/stdc++.h>
using namespace std;
   int a[100000];
   int n;

void display(int k)
{
   for(int i = 0; i<=k; i++)
      cout << " " << a[i];
   cout << endl;
}


int main()
{
   cin >> n;
   for(int i = 0; i<n; i++) cin >> a[i];
   for(int i = 0; i<n; i++)
   {
      sort(a, a+i+1);
      cout << "Buoc " << i << ":";
      display(i);
   }
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int n, k;
      cin >> n >> k;
      int a[k+5] = {};
	  int b[n+10] = {};
      for(int i = 1; i<=k; i++)
   	{
		cin >> a[i];
		b[a[i]]++;
	}
         int l = k;
         while(a[l] == n-k+l && l)
         {
            l--;
         }
         a[l]++;
         if(l==0)
            cout << k << endl;
         else
         {
            for(int i = l+1; i<=k; i++)
            {
               a[i] = a[i-1] +1;
            }
			int ans = 0;
		 	for(int i = 1; i<=k; i++)
			 {
				if(!b[a[i]])
				{
					ans++;
				}
		 }
		 cout <<ans << endl;
         }
   }
}
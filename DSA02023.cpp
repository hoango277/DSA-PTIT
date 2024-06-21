#include<bits/stdc++.h>
using namespace std;
int n, k;
int b[100];
vector<string> a;
void Try(int i)
{
    for(int j = b[i-1] + 1; j<=n-k+i; j++)
    {
        b[i] = j;
        if(i == k)
        {
            for(int l = 1; l <=k; l++)
            {
                cout << a[b[l]-1] << ' ';
            }
            cout << endl;
        } 
        else
            Try(i+1);
    }
}


int main()
{
    cin >> n >> k;
    string tmp;
   for(int i = 0; i<=n; i++)
   {
        cin >> tmp;
        int check = 1;
        for(auto j : a)
        {
            if(j == tmp)
            {
                check = 0;
            }
        }
        if(check)
        {
            a.push_back(tmp);
        }
   }
   n = a.size();
   sort(a.begin(), a.end());
    Try(1);
}

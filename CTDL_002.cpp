#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> a;
vector<int> b;
vector<vector<int>> ans;


void Try(int sum, int pos)
{
    if(sum == k)
    {
        ans.push_back(b);
    }
    for(int i = pos; i<n; i++)
    {
        if(sum + a[i] <=k)
        {
            b.push_back(a[i]);
            Try(sum + a[i], i+1);
            b.pop_back();
        }
    }
}

int main()
{
   cin >> n >> k;
    a.resize(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    Try(0,0);
    for(int i = ans.size()-1; i>=0; i--)
    {
        for(int j = 0; j<ans[i].size(); j++)
        {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }
    cout << ans.size();
}
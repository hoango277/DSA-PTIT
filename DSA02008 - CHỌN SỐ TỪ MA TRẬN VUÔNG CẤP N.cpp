#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n, k;
int a[1005][1005];
int sum = 0;
vector<int> b;
vector<vector<int>> ans;


bool check()
{
    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum += a[i+1][b[i]];
    }
    if(sum == k)
        return 1;
    return 0;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    // sum = 0;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            cin >> a[i][j];
  
    for(int i = 0; i<n; i++)
    {
        b.push_back(i+1);
    }
    do{
        if(check())
        {
            ans.push_back(b);
        }
    }while(next_permutation(b.begin(), b.end()));
    cout << ans.size() << endl;
    for(auto i : ans)
    {
        for(auto j : i)
            cout << j << ' ';
        cout << endl;
    }
    cout << endl;
    
}
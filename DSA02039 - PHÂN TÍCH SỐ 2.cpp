#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
vector<int> v;
vector<vector<int>> ans;
void Try(int sum, int limit)
{
    for(int i = n; i>=1; i--)
    {
        if(i<=limit)
        {
            sum += i;
            v.push_back(i);
            if(sum == n)
            {
                ans.push_back(v);
            }
            else if(sum<n)
                Try(sum, i);
            sum -= i;
            v.pop_back();
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        v.clear();
        ans.clear();
        cin >> n;
        Try(0, 1e9);
        cout << ans.size() << endl;
        for(int i  = 0; i<ans.size(); i++)
        {
            cout << '(';
            for(int j = 0; j<=ans[i].size() -1; j++)
            {
                if(j == ans[i].size() -1 )
                {
                    cout << ans[i][j] << ')';
                }
                else    
                    cout << ans[i][j] << ' ';
            }
            cout << " ";
        }
        cout << endl;
    }   
}
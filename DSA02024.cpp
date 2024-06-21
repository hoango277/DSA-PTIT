#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
int a[1000];
vector<int> tmp;
vector<string> ans;

void Try(int target, int pos)
{
    for(int j = pos; j<=n; j++)
    {
        if(a[j] > target)
        {
            tmp.push_back(a[j]);
            if(tmp.size()>=2)
            {
                string tmp1 = "";
                for(int l : tmp)
                {
                    tmp1 += to_string(l)  + " ";
                }
                ans.push_back(tmp1);
            }
            Try(a[j], j+1);
            tmp.pop_back();
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for(int i = 1; i<=n; i++)
        cin >> a[i];
    Try(-1, 1);
    sort(ans.begin(), ans.end());
    for(auto i : ans)
        cout << i << endl;
}
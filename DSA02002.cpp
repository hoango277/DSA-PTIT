#include<bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
vector<vector<int>> v;
int n;

void Try(int i)
{
    v.push_back(a);
    if(i == n)
    {
        return;
    }
    for(int j = 0; j<a.size()-1; j++)
    {
        b.push_back(a[j] + a[j+1]);
    }
    a = b;
    b.clear();
    Try(i+1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        a.clear();
        b.clear();
        v.clear();
        cin >> n;
        a.resize(n);
        
        for(int& i : a) cin >> i;
        Try(1);
        reverse(v.begin(), v.end());
        for(auto i: v)
        {
             cout << "[";
             for(int j = 0; j<i.size(); j++)
            {
                cout << i[j];
                if(j!= i.size()-1)
                    cout << ' ';
                else
                    cout << "] ";
            }
        }
        cout << endl;
    }
    
}
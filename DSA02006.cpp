#include <bits/stdc++.h>
using namespace std;
int b[1000];
vector<int> c;
bool check;

void print()
{
    cout << '[';
    for(int i = 0; i<c.size(); i++)
    {
        cout << c[i];
        if( i!= c.size() - 1) cout << ' ';
        else
            cout << "] ";
    }
    
}
void Try(vector<int> &a, long long sum, int k, int pos)
{
    for(int j = pos; j<a.size(); j++)
    {
        if(b[j] == 0)
        {
            sum += a[j];
            c.push_back(a[j]);
            b[j] = 1;
            if(sum==k)
            {
                check = 1;
                print();
            }
            else
            {
                Try(a, sum, k, j+1);
            }
            b[j] = 0;
            sum -= a[j];
            c.pop_back();
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        check = 0;
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int &i:a) cin >> i;
        sort(a.begin(), a.end());
        Try(a, 0, k, 0);
        if(!check)
        {
            cout << "-1";
        }
        cout << endl;
    }
}
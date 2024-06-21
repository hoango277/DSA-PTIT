#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a, b;
        a.resize(n);
        for(int i = 0; i<n; i++) cin >> a[i];
        b = a;
        sort(b.begin(), b.end());
        bool check = 1;
        for(int i = 0; i<n; i++)
        {
            if(a[i] != b[i] && b[i] != a[n-i-1])
            {
                check = 0;
                break;
            }
        }
        if(check) cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
class Job{
    public:
    int s, e;
};

bool cmp(Job a, Job b)
{
    return a.e < b.e;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        Job a[n];
        for(int i = 0; i<n; i++)
            cin >> a[i].s;
        for(int i = 0; i<n; i++)
            cin >> a[i].e;
        sort(a, a+n, cmp);
        int tmp = -1;
        int cnt = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i].s >= tmp)
            {
                cnt++;
                tmp = a[i].e;
            }
        }
        cout << cnt << endl;
    }
}
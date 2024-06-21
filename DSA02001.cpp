#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int n;
vector<int> a;
vector<int> b;
void print()
{
    cout << "[";
    for(int i = 0; i<a.size(); i++)
    {
        cout << a[i];
        if(i!= a.size()-1)
            cout << ' ';
        else
            cout << ']';
    }
    cout << endl;
}

void Try(int i)
{
    print();
    if(i==n)
        return;
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
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        a.resize(n);
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }
        Try(1);
    }   
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        queue<int> q;
        while(n--)
        {
            int x;
            cin >> x;
            switch (x)
            {
            case 1:
                cout << q.size() << endl;
                break;
            case 2:
                if(q.empty())
                {
                    cout << "YES\n";
                }
                else
                    cout << "NO\n";
                break;
            case 3:
                int a;
                cin >> a;
                q.push(a);
                break;
            case 4:
                if(q.size())
                    q.pop();
                break;
            case 5:
                if(q.size())
                    cout << q.front() << endl;
                else
                    cout << "-1\n";
                break;
            case 6:
                if(q.size())
                    cout << q.back() << endl;
                else
                    cout << "-1\n";
            }
        }
    }   
}

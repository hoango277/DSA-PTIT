#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int deg_out[1001], deg_in[1001];
int v, e;

int check()
{
   for(int i = 1; i<=v; i++)
   {
        if(deg_in[i] != deg_out[i])
        {
            return 0;
        } 
   }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        memset(deg_in, 0, sizeof deg_in);
        memset(deg_out, 0, sizeof deg_out);
        cin >> v >> e;
        for(int i = 0; i<e; i++)
        {
            int x, y;
            cin >> x >>y;
            deg_out[x]++;
            deg_in[y]++;
        }
        cout << check() << endl;
    }   
}
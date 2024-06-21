#include<bits/stdc++.h>
using namespace std;

vector<string> v;

bool check(string& ngay)
{
    if(ngay == "00")
        return 0;
    return 1;
}

void Try(int i,string ngay1, string nam1)
{
    if(i==3)
    {
        if(check(ngay1))
        {
        
            string s = ngay1 + "/" + "02/2" + nam1;
            v.push_back(s);
        }
    }
    else
    {
        if(i<2)
        {
            Try(i+1, ngay1+"0", nam1 +"0");
            Try(i+1, ngay1+"0", nam1+"2");
            Try(i+1, ngay1+"2", nam1 + "0" );
            Try(i+1, ngay1+"2", nam1+"2");
        }
        else
        {
            Try(i+1, ngay1, nam1+"0");
            Try(i+1, ngay1, nam1+"2");
        }
        
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while(t--)
    {
        Try(0, "", "");
        sort(v.begin(), v.end());
        for(string i : v)
        {
            cout << i << endl;
        }
    }   
}
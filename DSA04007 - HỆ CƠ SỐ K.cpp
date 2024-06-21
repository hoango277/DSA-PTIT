#include<bits/stdc++.h>
using namespace std;


long long powMod(long long n, long long k)
{
    if(k==0) return 1;
    if(k==1) return n;
    long long x = powMod(n, k/2);
    if(k%2)
        return x*x*n;
    else
        return x*x;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       string s1, s2;
       cin >> n >> s1 >> s2;
       long long num1 = 0, num2 = 0;
       int x = 0;
        for(int i = s1.size()-1; i>=0; i--)
        {
            if(s1[i] != '0')
                num1 += (s1[i]-'0') * powMod(n, x);
            x++;
        }
        x = 0;
        for(int i = s2.size()-1; i>=0; i--)
        {
            if(s2[i] != '0')
            num2 += (s2[i]-'0') * powMod(n, x);
            x++;
        }
        num1 += num2;
        vector<int> v;
        while(num1)
        {
            v.push_back(num1%n);
            num1 /= n;
        }
        for(int i = v.size()-1; i>=0; i--)
        {
            cout << v[i];
        }
        cout << endl;
    }   
}
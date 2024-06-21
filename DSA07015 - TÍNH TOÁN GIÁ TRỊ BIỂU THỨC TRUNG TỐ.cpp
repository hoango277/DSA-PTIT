#include <bits/stdc++.h>
using namespace std;

int prio(char c) {
    if (c == '*' || c == '/') return 3;
    if (c == '+' || c == '-') return 2;
    return 1;
}

long long calc(long long a, long long b, char s)
{
    if(s=='+') return a+b;
    if(s == '-') return a-b;
    if(s== '/') return a/b;
    return a*b;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<long long> st1;
        stack<char> st2;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == '(')
                st2.push(s[i]);
            else if(isdigit(s[i]))
            {
                long long tmp = 0;
                while(i<s.size() && isdigit(s[i]))
                {
                    tmp = tmp * 10 + s[i] - '0';
                    i++;
                }
                st1.push(tmp);
                i--;
            }
            else if(s[i] == ')')
            {
                while(st2.size() && st2.top() != '(')
                {
                    long long x1 = st1.top();
                    st1.pop();
                    long long x2 = st1.top();
                    st1.pop();
                    long long x3 = calc(x2, x1, st2.top());
                    st2.pop();
                    st1.push(x3);
                }
                st2.pop();
            }
            else
            {
                while(st2.size() && prio(st2.top()) >= prio(s[i]))
                {
                    long long x1 = st1.top();
                    st1.pop();
                    long long x2 = st1.top();
                    st1.pop();
                    long long x3 = calc(x2, x1, st2.top());
                    st2.pop();
                    st1.push(x3);
                }
                st2.push(s[i]);
            }
        }
        while(!st2.empty())
        {
                    long long x1 = st1.top();
                    st1.pop();
                    long long x2 = st1.top();
                    st1.pop();
                    long long x3 = calc(x2, x1, st2.top());
                    st2.pop();
                    st1.push(x3);
        }
        cout << st1.top() << endl;
    }
}
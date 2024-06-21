#include <bits/stdc++.h>
using namespace std;
set<string> s;
vector<string> s1;
int x;
int n, m;
int a[100][100];
char b[100][100];
string tmp;

int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

bool check()
{
   if(s.count(tmp))
   return 1;
   return 0;
}

void Try(int i, int j)
{
   for(int k = 0; k<8; k++)
   {
      int i1 = i+dx[k];
      int j1 = j+dy[k];
      if(j1 >= 1 && j1<=m && i1 >=1 && i1<=n && !a[i1][j1])
      {
         a[i1][j1] = 1;
         tmp += b[i1][j1];
         if(check())
         {
            s1.push_back(tmp);
         }
         Try(i1, j1);
         tmp.pop_back();
         a[i1][j1] = 0;
      }
   }
}

int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      tmp = "";
      memset(a,0, sizeof(a));
      s.clear();
      s1.clear();
      cin >> x >> n >> m;
      for(int i = 0; i<x; i++)
      {
         string word;
         cin >> word;
         s.insert(word);
      }
      for(int i = 1; i<=n; i++)
      {
         for(int j = 1; j<=m; j++)
         {
            cin >> b[i][j];
         }
      }
      for(int i = 1; i<=n; i++)
      {
         for(int j = 1; j<=m; j++)
         {
            a[i][j] = 1;
            tmp += b[i][j];
            Try(i, j);
            a[i][j] = 0;
            tmp.pop_back();
         }
      }
      if(s1.size())
      {
         for(auto i : s1)
         {
            cout << i << ' ';
         }
         cout << endl;
      }
      else
         cout << "-1\n";
   }
}
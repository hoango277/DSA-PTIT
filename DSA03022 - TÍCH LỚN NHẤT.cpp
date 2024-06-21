#include <bits/stdc++.h>
#define ll long long
#define faster()                    \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);
using namespace std;

int main()
{
  int t = 1;
  // cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n];
    for (int &x : a)
      cin >> x;
    sort(a, a + n);
    ll max1 = 0;
    ll max2 = 0;
    max1 = max(1ll * a[0] * a[1], 1ll * a[n - 1] * a[n - 2]);
    max2 = max({1ll * a[0] * a[1] * a[2], 1ll * a[0] * a[n - 1] * a[n - 2], 1ll * a[n - 1] * a[1] * a[0], 1ll * a[n - 3] * a[n - 1] * a[n - 2]});
    ll res = max(max1, max2);
    cout << res << endl;
  }
  return 0;
}
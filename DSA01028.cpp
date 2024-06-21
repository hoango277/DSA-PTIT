#include <bits/stdc++.h>
using namespace std;

#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

int n, k, ok, a[100];

void ktao(){
    for(int i = 1; i <= k; i++){
        a[i] = i;
    }
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else {
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

int main() {
    faster();
    int t;
    cin >> t >> k;
    int tmp[100];
    ok = 1;
    set<int> se;
    for(int i = 1; i <= t; i++){
        int x; cin >> x;
        se.insert(x);
    }
    n = se.size();
    int i = 1;
    for(int x : se){
        tmp[i++] = x;
    }
    ktao();
    while(ok){
        for(int i = 1; i <= k; i++){
            cout << tmp[a[i]] << " ";
        }
        sinh();
        cout << endl;
    }
    return 0;
}
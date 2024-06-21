#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int d[8][8]; // 8x8 is sufficient for a chessboard
int x, y, X, Y;

int dx[8] = {-2,-2,2,2,-1,-1,1,1};
int dy[8] = {-1,1,-1,1,-2,2,-2,2};

int bfs(int x, int y) {
    queue<pair<int, int>> q;
    q.push({x, y});
    memset(d, -1, sizeof d); // Initialize distances to -1
    d[x][y] = 0;
    
    while(!q.empty()) {
        auto it = q.front();
        q.pop();
        int x1 = it.first;
        int y1 = it.second;
        
        if (x1 == X && y1 == Y) return d[X][Y];
        
        for(int i = 0; i < 8; i++) {
            int new_x = x1 + dx[i];
            int new_y = y1 + dy[i];
            
            if (new_x >= 0 && new_x < 8 && new_y >= 0 && new_y < 8 && d[new_x][new_y] == -1) {
                d[new_x][new_y] = d[x1][y1] + 1;
                q.push({new_x, new_y});
            }
        }
    }
    return -1; // In case there's no possible move (shouldn't happen in this problem)
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        x = s1[0] - 'a';
        y = s1[1] - '1';
        X = s2[0] - 'a';
        Y = s2[1] - '1';
        cout << bfs(x, y) << endl;
    }
}

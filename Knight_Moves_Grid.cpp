#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dist(n, vector<int>(n, -1));
    vector<pair<int,int>> moves = {{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};

    queue<pair<int,int>> q;
    dist[0][0] = 0;
    q.push({0,0});

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (auto [dx, dy] : moves) {
            int nx = x + dx;
            int ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < n && dist[nx][ny] == -1) {
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

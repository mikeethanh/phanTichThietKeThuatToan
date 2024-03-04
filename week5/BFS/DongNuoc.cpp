#include<iostream>
#include<queue>
#include<map>
using namespace std;

map<pair<int, int>, int> M;
queue<pair<int,int>> Q;
int m, n, k;

int bfs() {
    Q.push({0, 0});
    M[{0, 0}] = 0;

    while (!Q.empty()) {
        int x = Q.front().first;
        int y = Q.front().second;
        Q.pop();

        pair<int,int> Next[] = {{0, y}, {x, 0}, {n, y}, {x, m}, {max(0, x + y - m), min(m, x + y)}, {min(x + y, n), max(0, x + y - n)}};

        for (pair<int,int> coord : Next) {
            int u = coord.first;
            int v = coord.second;

            if (M[{u, v}] == 0) {
                Q.push({u, v});
                M[{u, v}] = M[{x, y}] + 1;

                if (u == k || v == k) {
                    return M[{u, v}] - 1;
                }
            }
        }
    }

    // If no solution found
    return -1;
}

int main() {
    cin >> n >> m >> k;
    int res = bfs();
    
    if (res == -1) {
        cout << "Khong dong duoc nuoc" << endl;
    } else {
        cout << res << endl;
    }

    return 0;
}

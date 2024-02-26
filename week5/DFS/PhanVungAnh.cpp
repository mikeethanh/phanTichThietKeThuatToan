#include<iostream>
#include<stack> 
using namespace std;

const int MAXN = 205;
int a[MAXN][MAXN], n, m;
int hh[] = {-1, 1, 0, 0};
int hc[] = {0, 0, -1, 1};

void DFS(int u, int v) {
    stack<pair<int, int>> S;
    a[u][v] = 1; 
    S.push({u, v});
    while (S.size() > 0) {
        u = S.top().first; 
        v = S.top().second;
        S.pop();
        for (int h = 0; h < 4; h++) {
            int i = hh[h], j = hc[h];
            if (a[u + i][v + j] == 0 && 1 <= u + i && u + i <= n && 1 <= v + j && v + j <= m) {
                a[u + i][v + j] = 1;
                S.push({u + i, v + j});
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (a[i][1] == 0) DFS(i, 1);
        if (a[i][m] == 0) DFS(i, m);
    }

    for (int j = 1; j <= m; j++) {
        if (a[1][j] == 0) DFS(1, j);
        if (a[n][j] == 0) DFS(n, j);
    }
    int k = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 0) {
                k++;
                DFS(i, j);
            }
        }
    }
    cout << k;
    return 0;
}

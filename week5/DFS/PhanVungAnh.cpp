#include<iostream>
#include<stack> 
#include<vector>
#include<algorithm>
using namespace std;

const int MAXN = 205;
int a[MAXN][MAXN], n, m;

int DFS(int u, int v) {
    int d = 1;
    stack<pair<int, int>> S;
    a[u][v] = 1; 
    S.push({u, v});
    while (S.size() > 0) {
        int u = S.top().first, v = S.top().second;
        S.pop();
        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if (a[u + i][v + j] == 0 && 1 <= u + i && u + i <= n && 1 <= v + j && v + j <= m) {
                    a[u + i][v + j] = 1;
                    S.push({u + i, v + j});
                    d++;
                }
            }
        }
    }
    return d;
}

int main() {
    cin >> n >> m;
    vector<int> b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 0) {
                int temp = DFS(i, j);
                b.push_back(temp);
            }
        }
    }
    cout << b.size() << endl;
    sort(b.begin(), b.end());
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    return 0;
}

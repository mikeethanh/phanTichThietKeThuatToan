#include<bits/stdc++.h>
using namespace std;

int a[100][100], n, res = 1e9, d[100], C[10000], m = 0;

void TRY(int k, int x, int T) {
    if(k - 1 == n) {
        res = min(res, T + a[x][1]);
    } else {
        for(int t = 2; t <= n; t++) {
            if(d[t] == 0 && T + a[x][t] + C[n - (k - 1)] < res) {
                d[t] = 1;
                TRY(k + 1, t, T + a[x][t]);
                d[t] = 0;
            }
        }
    }
}

int main() {
    // Input
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if(i != j) {
                C[++m] = a[i][j];
            }
        }
    }
    sort(C + 1, C + m + 1);
    partial_sum(C + 1, C + m + 1, C + 1);
    TRY(2, 1, 0);
    cout << res;
    return 0;
}

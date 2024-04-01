#include <bits/stdc++.h>
using namespace std;

int a[100], n, M, res = 1e9;

void TRY(int k, int T, int t) {
    if (k - 1 == n - 1) {
        if ((M - T) % a[n] == 0) 
            res = min(res, t + (M - T) / a[n]);
        return;
    }
    for (int z = min(res - t, (M - T) / a[k]); z >= 0; z--) 
        TRY(k + 1, T + z * a[k], t + z);
}

int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    TRY(1, 0, 0);
    cout << res;
    return 0;
}

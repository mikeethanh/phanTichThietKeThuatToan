#include <iostream>
#include <string>
using namespace std;

string x, y;
int n, m, C[100][100] = {};

void trace(int n, int m) {
    if (C[n][m] == 0) return;
    while (C[n][m] == C[n - 1][m]) n--;
    while (C[n][m] == C[n][m - 1]) m--;
    trace(n - 1, m - 1);
    cout << x[n];
}

int main() {
    cin >> x;
    n = x.size();
    x = "$" + x;
    cin >> y;
    m = y.size();
    y = '$' + y;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            C[i][j] = x[i] == y[j] ? C[i - 1][j - 1] + 1 : max(C[i - 1][j], C[i][j - 1]);
        }
    cout << "do dai: " << C[n][m] << "\nTruy vet: ";
    trace(n, m);
}

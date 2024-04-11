#include<bits/stdc++.h>

using namespace std;

typedef pair<int, int> sk;

bool cmp(const sk& a, const sk& b) {
    return a.second < b.second;
}

int main() {
    int n, m = -1e9, res = 0;
    cin >> n;
    sk A[n];
    for (auto &a : A) {
        cin >> a.first >> a.second;
    }
    sort(A, A + n, cmp);
    for (auto a : A) {
        if (a.first > m) {
            res++;
            m = a.second;
        }
    }
    cout << res;
    return 0;
}

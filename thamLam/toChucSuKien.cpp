#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> sk;

bool cmp(const sk& a, const sk& b) {
    return a.second < b.second;
}
void sol() {
    int n, m = -1e9, k = -1e9, res = 0;
    cin >> n;
    sk A[n];
    for (auto &a : A) {
        cin >> a.first >> a.second;
    }
    sort(A, A + n, cmp);
    for(auto a : A) {
        if(m < k) swap(m, k);
        if(a.first > m) {
            res++;
            m = a.second;
        } else if(a.first > k) {
            res++;
            k = a.second;
        }
    }
    cout << res <<endl;
}
int main() {
    int t ; 
    cin >> t;
    while(t--) sol();
    return 0;
}

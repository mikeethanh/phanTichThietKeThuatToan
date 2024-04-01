#include<bits/stdc++.h>
using namespace std;

int a[200], res = 0, n,M;
void TRY(int k, int T) {
    if(k - 1 == n) res = max(res,T);
    else {
        TRY(k+1,T);
        if(T + a[k] <= M) TRY(k +1, T + a[k]);
    }
}

int main() {
    cin >>n >> M;
    for(int i = 1; i <= n; i++) cin >>a[i];
    TRY(1,0);
    cout << res ;
}
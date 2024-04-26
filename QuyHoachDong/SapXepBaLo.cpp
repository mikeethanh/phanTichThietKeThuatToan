//sap xep ba lo k lap
#include<bits/stdc++.h>
using namespace std;
int C[105][10005] = {},n,M,a[100],b[100];

void trace(int n, int M) {
    if(C[n][M] == 0) return;
    while(C[n][M] == C[n-1][M]) n--;
    trace(n-1,M-a[n]);
    cout << "\nChon dv kt" << a[n]<< " gt " <<b[n]; 
}

int main() {
    cin >>n >> M;
    for(int i = 1 ; i <= n ; i++) {
        cin >> a[i]>>b[i];
        for(int j = 1 ; j <= M; j++) {
            C[i][j] = j < a[i] ? C[i-1][j] : max(C[i-1][j], b[i] + C[i-1][j - a[i]]);
        }
    }
    cout <<C[n][M];
    trace(n,M);
    
}

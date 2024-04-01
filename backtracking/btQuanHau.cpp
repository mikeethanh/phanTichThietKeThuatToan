#include<bits/stdc++.h>
using namespace std;

#define ll long long 

map<int, bool> C, P, A;
int d = 0; 
void TRY(int *x, int k, int n) {
    if(k - 1 == n) {
       d++;
        return;
    }
    
    for(int t = 1; t <= n; t++) {
        if(A[t] == 0 && C[k - t] == 0 && P[k + t] == 0) {
            A[t] = C[k - t] = P[k + t] = 1;
            x[k] = t;
            TRY(x,k+1,n);
            A[t] = C[k - t] = P[k + t] = 0; // Reset the flags after backtracking
        }
    }
}

int main() {
    int n, x[100];
    cin >> n;
    TRY(x,1,n);
    cout << d;
}

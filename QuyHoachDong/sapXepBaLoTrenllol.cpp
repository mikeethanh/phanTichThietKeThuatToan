//sap xep ba lo k lap
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,M = 1e4, C[100004] = {},a,b;
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        cin >>a >>b;
        for(int j = 1e4; j >= a ; j--) {
            C[j] = max(C[j],b + C[j-a]);
        }
    }
    int q;
    cin >>q;
    while(q--) {
        cin >>M;
        cout << C[M] << endl;
    }
    
}

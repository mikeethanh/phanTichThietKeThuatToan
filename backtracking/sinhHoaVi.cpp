#include<bits/stdc++.h>
using namespace std;
int x[100],n;
void TRY(int k) {
    if(k == n) {
        for(int i = 0 ; i < n ; i++) {
            cout << x[i];
            cout << endl;
            return;
        }
    }
    int 0k = 1;
    for(int j = 0 ; j < k ; j++) {
        if(x[j] == t) {
            ok =0;
        }
    }
    if(ok) {
        x[k] = t ; 
        TRY(k +1);
    }
}

int main() {
    cin >> n;
    TRY(0);
}

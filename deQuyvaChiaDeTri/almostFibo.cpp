#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9  + 7;

void myPow(long long n, long long &a, long long &b) {
    if(n == 0) {
        a = 1 ; 
        b = 0 ; 
        return;
    }
    if(n == 1) {
        a = b = 1 ; 
        return;
    }
    long long x, y ; 
    myPow(n/2, x, y) ;
    a = (x * x % MOD + y * y % MOD) % MOD; 
    b = (x * y % MOD + y * (x - y) % MOD) % MOD; 
    if(n % 2 == 1) { 
        a = (a + b) % MOD;
        b = (a - b) % MOD;
    }
}

int main() {
    long long a, b ; 
    long long n ; 
    cin >> n;
    myPow(n + 1 , a, b);
    cout << (a - 1 + MOD) % MOD; 
    return 0; 
}

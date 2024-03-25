#include<bits/stdc++.h>
using namespace std;

void myPow(int n, long long &a, long long &b ) {
    if(n = 0) {
        a = 1 ; 
        b = 0 ; 
        return;
    }
    long long x, y ; 
    myPow(n/2, x, y) ;
    a = x * x + y * y;
    b = x * y + y * (x - y);
    if(n % 2 ) {
        a = a + b;
        b = a - b;
    }
}

int main() {
    long long a,b ; 
    int n ; 
    cin >> n;
    myPow(n, a, b);
    cout << a;
}
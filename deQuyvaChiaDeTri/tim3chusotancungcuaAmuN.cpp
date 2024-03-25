#include<bits/stdc++.h>
using namespace std;

long long M = 1000;
long long POW(long long a, long long n) {
    if(n == 0) return 1;
    if(n % 2 == 0 ) return a * POW(a * a % M, n/2) % M;
    return POW(a * a % M, n/2);
}
int main() {
    long long a,n;
    cin >> a >> n ; 
    a %= M; 
    n %= 400;2 
    if(n == 0) {
        n = 400;
    }
    cout << setw(3) << setfill('0') << POW(a,n) << endl;
}
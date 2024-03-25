#include<bits/stdc++.h>
using namespace std;

long long M = 1000;
long long POW(long long a, long long n) {
    if(n == 0) return 1;
    if(n % 2 == 0 ) return a * POW(a * a % M, n/2) % M;
    return POW(a * a % M, n/2);
}
int main() {
    string a,n;
    long long A = 0 , N = 0 ; 
    cin >> a ;
    for(auto x : a) A = (A * 10 + x - '0') % M;
    cin >> n ; 
    for(auto x : n) N = (N * 10 + x - '0') % 400;
    if(N == 0) {
        N = 400;
    }
    cout << setw(3) << setfill('0') << POW(A,N) << endl;
}
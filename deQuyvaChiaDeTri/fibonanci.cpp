#include<bits/stdc++.h>
using namespace std;
typedef pair<long,long> PLL;

PLL Fibo(int n) {
    if(n == 1) return {1,1};
    PLL p = Fibo(n - 1);
    return {p.second,p.first + p.second};
}

int main() {
    int n ; 
    cin >> n;
    PLL p = Fibo(n);
    cout << p.second;
}
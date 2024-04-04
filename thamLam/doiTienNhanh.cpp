#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[] = {500,200,100,50,20,10,5,2,1};
    int M, t = 0 ; 
    cin >> M;
    if(M % 1000) return !printf("-1");
    M /= 1000;
    for(auto x : a) {
        t += M/x;
        M %= x;
    }
    cout <<t;
}
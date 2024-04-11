#include<bits/stdc++.h>
using namespace std;

struct ss {
    bool operator() (int a, int b) {
        if(a % 3 == b % 3) {
            return a < b;
        }
        return a % 3 < b % 3;
    }
};

int main() {
    int n ; 
    cin >>n;
    int a[n];
    for(auto& x : a) cin >>x;
    sort(a, a + n, ss());
    for(auto x : a) cout << x << " ";
}

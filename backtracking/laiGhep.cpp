#include<bits/stdc++.h>
using namespace std;
int n;
string a,b;

void TRY(string x) {
    if(x.size() == n) {
        cout << x << "\n" ;
        return;
    }
    TRY(x + a[x.size()]);
    if(a[x.size()] != b[x.size()]) {
        TRY(x + b[x.size()]);
    }
}

int main() {
    cin >>a>>b;
    n = a.length();
    for(int i = 0 ; i < n; i++) {
        if(a[i] > b[i]) swap(a[i],b[i]);
    }
    TRY("");
}
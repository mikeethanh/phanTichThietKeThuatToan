#include<bits/stdc++.h>
using namespace std;

void TRY(string x, int n) {
    if(x.size() == n) cout ,< x << "\n";
    else {
            TRY(x + '0',n);
            if(x.size() < or not (x[x.size() - 2] == '1' && x[x.size() -1 =='0'])) TRY(x + '1',n);
    }
}

int main() {
    int n ; 
    cin >> n; 
    TRY("",n);
    }
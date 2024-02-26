#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int n;

void bfs() {
    queue <ll> q;
    ll tmp = 0;
    q.push(0);
    while(1){
        tmp = q.front();
        q.pop();
        if(tmp*10 > 999999999) return;
        if(tmp != 0) {
            if((tmp*10) % n == 0){
                cout << tmp*10 << endl;
            }
        q.push(tmp*10);
    }
    if((tmp*10+1) % n == 0) {
        cout << tmp*10+1 << endl;
    }
    q.push(tmp*10+1);
    if((tmp*10+2) % n == 0) {
        cout << tmp*10+2 << endl;
    }
    q.push(tmp*10+2);
    if((tmp*10+5) % n == 0) {
        cout << tmp*10+5 << endl;
    }
    q.push(tmp*10+5);
    }
}

int main() {
    cin >> n;
    bfs();
}
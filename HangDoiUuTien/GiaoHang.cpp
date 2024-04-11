#include<bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> Q;
    vector<long> A[10005];

    long n,t,v,res = 0, M = 0 ; 
    cin >> n;
    while(n--) {
        cin >> t >>v;
        M = max(M,t);
        A[t].push_back(v);
    }
    
    for(int i = M; i >0; i--) {
        for(int x:A[i]) Q.push(x);
        if(Q.size()) {
            res += Q.top();
            Q.pop();
        }
    }
    cout << res;
}
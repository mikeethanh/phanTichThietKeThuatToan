#include<iostream>
#include<queue>
#include<map>
using namespace std;
map<int,string> M;
queue<int> Q;


int main() {
    int n , u , v ; 
    cin >> n ;
    if(n % 5 == 0 ) {
        cout << "0" <<endl;
        return 0;
    };
    Q.push(8%n); M[8%n] = "8";
    Q.push(6%n); M[6%n] = "6";
   
    while(Q.size() && M.find(0)== M.end()) {
        u = Q.front();
        Q.pop();
        v = (10 * u +6)%n; if(M.find(v)== M.end()) {Q.push(v);M[v] = M[u] + "6";};
        v = (10 * u +8)%n; if(M.find(v)== M.end()) {Q.push(v);M[v] = M[u] + "8";};
    }
    if(M.find(0)== M.end()) cout << "0" <<endl;
    else cout << M[0] <<endl;
    return 0;

}
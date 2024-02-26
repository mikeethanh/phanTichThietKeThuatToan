#include<iostream>
#include<queue>
using namespace std;
void path(int s, int f, int *p) {
    if(s==f) cout <<s ; 
    else {path(s,p[f],p); cout << "->" << f;}
}
int main() {
    int n , k , m  ,s , f ; 
    cin >> n >> k >> m >> s >> f;
    queue<int> Q;
    int d[n+5] = {}, p[n+5] = {};
    Q.push(s);
    d[s] = 1;
    while(!Q.empty()) {
        int u = Q.front();
        Q.pop();
        for(int v:{u + k, u - m}) {
            if(v <= n && v >= 1 && d[v]== 0) {
                d[v]= d[u]+1;
                p[v] = u;
                Q.push(v);
            }
        }
    }     
    cout << d[f]-1;
    if(d[f]) {
        cout << "so buoc: " << d[f]-1 <<"\n";
        path(s,f,p);
    }
}
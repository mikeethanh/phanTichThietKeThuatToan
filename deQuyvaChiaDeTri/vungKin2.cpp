#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i = a ; i <=b ; i++)

int a[205][205],n,m;
pair<int,int> Next[] = {{0,-1},{0,1},{1,0},{-1,0}};

void DFS(int u, int v) { //bien cac so 0 co lien thong voi toa do (u,v) -> 1
    a[u][v] = 1;
    for(auto z : Next) if(a[u + z.first][v + z.second] == 0) DFS(u + z.first, v + z.second);

}

int main() {
    cin >> n >> m ; 
    FOR(i,1,n)
    FOR(j,1,m) cin >> a[i][j];
    FOR(i,0,n+1) a[i][0] = a[i][m + 1] = 1; //them 2 cot toan 1 
    FOR(j,0,m+1) a[0][j] = a[n+1][j] = 1; //them 2 hang toan 1
    int k = 0 ; 

    FOR(i,1,n) {
        if(a[i][1] == 0) DFS(i,1);
        if(a[i][m] == 0) DFS(i,m);
    }

    FOR(j,1,m) {
        if(a[1][j] == 0) DFS(1,j);
        if(a[n][j] == 0) DFS(n,j);
    }

    FOR(i,2,n-1)
    FOR(j,2,m-1) if(!a[i][j]) {
            k++; DFS(i,j);
    }
    cout << k;
}
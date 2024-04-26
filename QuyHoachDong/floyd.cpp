#include<bits/stdc++.h>
using namespace std;
int C[105][105]= {}, P[105][105] = {},n,m;

void trace(int u, int v) {
    if(P[u][v] == 0) cout << u << "->";
    else {
        trace(u,P[u][v]);
        trace(P[u][v],v);
    }
} 

int main() {
    int x,y,w;
    cin >>n >>m;
    for(int i = 1 ; i <= n ; i++) {
        for(int j = 1 ; j < i ; j++) {
            C[i][j] = C[j][i] = 1e9;
        }
    }
    whhile(m--) {
        cin >> x >>y >>w;
        C[x][y] = w;
    }
    for(int k = 1 ; k <= n ; k++) 
    for(int i = 1 ; i <= n ; i++)
    for(int j =1 ; j <= n ; j++) {
        if(C[i][j] > C[i][k] + C[k][i]) {C[i][j] = C[i][k] + C[k][i]; P[i][j] = k;}
    }
    for(int i =1 ; i <= n ; i++)
    for(int j = 1 ; j <= n ; j++) {
        if(i != j) {
            if(C[i][j] == 1e9) cout << "\n Khong co duong di" << i << "sang" <<j;
            else {
                cout << "\nDinh " << i << " sang " << j << " " << C[i][j] << " ";
                trace(i,j);
                cout << j;
            }
        }
    }
 }
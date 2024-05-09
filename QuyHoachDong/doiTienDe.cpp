#include "bits/stdc++.h"
//doi tien ban de
using namespace std;
int n,M,a[100],C[104][10004] = {};

void trace(int n, int M) {
	if(C[n][M] == 0) return ;
	while(C[n][M] == C[n-1][M]) n--;
	trace(n,M-a[n]);
	cout <<a[n] <<" ";
	
}

int main(){
	cin>>n >>M;
	for(int i = 1 ; i <= n ; i++) cin >>a[i];
	fill(C[0]+1,C[0]+M+1,1e9);
	for(int i = 1 ; i <= n ; i++)
	for(int j = 1 ; j <= M; j++)
		C[i][j] = j < a[i] ? C[i-1][j] : min(C[i-1][j],1 + C[i][j -a[i]]);
	if(C[n][M] == 1e9) cout << -1;
	else {
		cout << C[n][M];
		cout <<endl;
		//trace(n,M);
	}
	
}


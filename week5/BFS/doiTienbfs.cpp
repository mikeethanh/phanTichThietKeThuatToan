#include "bits/stdc++.h"
using namespace std;
int main(){
	int n,M,q,x,C[10004] = {};
	cin >>n>>q;
	fill(C+1,C+10001,1e9);
	for(int i = 1 ; i <= n ;i++) {
		cin >>x;
		for(int j = x ; j < 10001;j++) C[j] = min(C[j],1 + C[j -x]);
	}
	while(q--) {
		cin >>x;
		if(C[x] == 1e9) C[x] = -1;
		cout << C[x] <<"\n";
	}
}


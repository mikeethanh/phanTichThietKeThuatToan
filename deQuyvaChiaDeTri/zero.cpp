#include<bits/stdc++.h>
using namespace std;
long long D[100005]={}, M=1e9 + 7;

long long zero(int n){
	if(D[n]) return D[n];
	if(n == 0) return D[n]= 1;
	for(long long a= 1; a*a <= n;a++) if(n %a== 0) D[n]=(D[n]+zero((a-1)*(n/a+1)))%M;
	return D[n];
}
int main(){
	int t, n;
	cin>> t;
	while(t--){ cin>>n; cout<<zero(n)<<"\n";}
	}
#include "bits/stdc++.h"
using namespace std;
int main(){
    long n;
    long C[100] = {0,1,2,4};
    cin>>n;
    for(int i = 4; i <= n;i++) C[i]=C[i-1]+C[i-2]+ C[i-3];
    cout<<C[n];
}  


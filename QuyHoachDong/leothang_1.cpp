#include "bits/stdc++.h"
using namespace std;
int d =0; 
void Try(int T, int n){
        if(T==n){d++;return;}
        for(int i :{1,2,3}){ //for(int i:{a,b,c})
            if(T+i<=n) Try(T+i,n);
        }
    }
    int main(){
        int n;
        cin>>n;
        Try(0,n);
        cout<<d;
    }


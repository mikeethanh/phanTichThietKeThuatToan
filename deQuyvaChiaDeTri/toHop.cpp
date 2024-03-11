#include<bits/stdc++.h>
using namespace std;

map<pair<int,int>,long long> Dic;
long long C(int k , int n) {
    if(n ==0) return 1;
    if(Dic.find({k,n}) == Dic.end())  Dic[{k,n}] = C(k-1, n-1) + C(k,n - 1);
     return Dic[{k,n}];
}

int main() {
    for(int i = 0 ; i < 10 ; i++) {
        cout << "\n"; 
        for(int j = 0 ; j <= i ; j++) {
            cout << C(i,j) << " " ;
        }
    }
}
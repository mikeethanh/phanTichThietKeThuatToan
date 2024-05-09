#include <bits/stdc++.h>

using namespace std;
int main(){
    long n,x,c,res;
    cin>>n>>c;
    res = 0;
    while (n - 1 > 0){
        cin>>x;
        c = max(c, (long) 0)+x;
        res = max(res,c);
        n--;
    }
    cout<< res;
    return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n , m ; 
    cin >> n >> m ;
    int a[n];
    int b[m];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin >> b[i];
    }
    sort(a,a + n);
    sort(b,b + m);
    int count = 0;
    int j = 0 ; 
    int i = 0 ; 
    while(j < m && i < n) {
        if(b[j] < a[i]) {
            count++;
            j++;
        } 
        i++;
    }
    cout << count;
}
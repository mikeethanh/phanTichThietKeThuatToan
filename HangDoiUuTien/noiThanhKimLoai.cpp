#include<bits/stdc++.h>
using namespace std;

int main() {
    int n ; 
    cin >>n; 
    int a[n];
    priority_queue<int,vector<int>, greater<int>> q;
    for(int i=0;i<n;i++){
        cin >> a[i];
        q.push(a[i]);
    }
    int res = 0 ; 
    while(q.size() > 1){
        int a = q.top();
        q.pop();
        int b = q.top();
        q.pop();
        res += (a + b);
        q.push(a + b);
    }
    cout << res ; 
}
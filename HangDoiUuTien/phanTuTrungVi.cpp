#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >>n;
    priority_queue<int> L;
    priority_queue<int,vector<int>, greater<int>> R;
    for(int i = 1 ; i <= n ;i++) {
        int x;
        cin >>x;

        if(i % 2 != 0) {
            L.push(x);
        }
        if(i % 2 == 0) {
            R.push(x);
        }
        if(i >= 2 && L.top() > R.top()) {
            int a = L.top();
            L.pop();
            int b = R.top();
            R.pop();
            L.push(b);
            R.push(a);
        } 
        cout <<L.top() << " ";
    }
}
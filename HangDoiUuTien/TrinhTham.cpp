#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, k ; 
    cin >> n >> k;
    priority_queue<pair<int, int>> queue;
    for(int i = 1 ; i <= n ; i++) {
        int temp;
        cin >>temp;
        while(queue.size() && queue.top().first<= temp) queue.pop(); // bo nhung so be di
        queue.push({temp, i});

        if(i >= k) {
            while(i - queue.top().second >= k) queue.pop(); //bo nhung so xa
            cout <<queue.top().first<<" " ;
        }
    }
}
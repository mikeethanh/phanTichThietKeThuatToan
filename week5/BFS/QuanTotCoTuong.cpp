#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const long MOD = 1000000007;

int x, y;
bool vs[15][15] = {};
int dx[3] = {1, 0, 0};
int dy[3] = {0, 1, -1};

struct point{
    int x, y, cnt;
};

int bfs(int n, int m){
    memset(vs, false, sizeof(vs));
    queue <point> q;
    vs[n][m] = true;
    q.push({n,m,0});
    while(!q.empty()){
        point tmp = q.front();
        q.pop();
        int a = tmp.x, b = tmp.y, cnt = tmp.cnt;
        if(a == x && b == y){
            return cnt;
        }
        if(a < 5){
            q.push({a+1, b, cnt+1});
        }
        else{
            for(int i = 0; i < 3; i++){
                int a1 = a + dx[i];
                int b1 = b + dy[i];
                if(a1 >= 0 && a1 <= 9 && b1 >= 0 && b1 <= 8 && !vs[a1][b1]){
                    vs[a1][b1] = true;
                    q.push({a1,b1,cnt+1});
                }
            }
        }
    }
    return INT_MAX;
}

int main() {
    cin >> x >> y;
    int a[6];
    a[1] = bfs(3, 0);
    a[2] = bfs(3, 2);
    a[3] = bfs(3, 4);
    a[4] = bfs(3, 6);
    a[5] = bfs(3, 8);
    int ans = INT_MAX;
    char c;
    for(int i = 1; i <= 5; i++){
        if(a[i] < ans){
            ans = a[i];
            c = 'A' + i - 1;
        }
    }
    if(ans == INT_MAX) cout << -1;
    else{
        cout << ans << endl << c;
    }
}
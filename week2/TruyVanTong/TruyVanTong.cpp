//a[1]...a[n] va n truy van tong 
// moi truy van 1<= l <= r << n ; 

//ham partial_sum
#include<iostream> 
#include<numeric>
using namespace std;

int main() {
    long n ; 
    cin >> n ;
    long m ;
    cin >> m ;
    long a[n];
    for(auto &x : a) cin >> x ; 

    long b[n];
    partial_sum(a, a + n, b);

    while(m--) {
        int x ; 
        int y ; 
        cin >> x >> y ; 
        x--; 
        y--;
        cout << b[y] - (x > 0 ? b[x - 1] : 0) << endl;
    }
    return 0;
}

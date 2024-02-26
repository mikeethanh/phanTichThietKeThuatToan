// ki thuat toi uu 
// n gia vang n ngay a1 ...an
// moi ngay mua 1 ban nhieu 
//input : 4 7 2  8 4 8 3 6 
// y tuong duyet i = 1 -> n -1 
        // tim z = max(a[i+1] , a[n])
        // Neeus ai < z thif res += a[i]


//ham max_element
#include<iostream> 
#include<algorithm>
using namespace std;

long solve(long a[], long n) {
    long res = 0;
    for(int i = 0; i < n - 1; i++) {
        long z = *max_element(a + i + 1, a + n);
        res += a[i] < z ? z - a[i] : 0;
    }
    return res;
}

int main() {
    long n;
    cin >> n;
    long a[n];
    for(auto &x : a) cin >> x;

    long res = solve(a, n);
    cout << res;
}

//y tuong thuat toan : 
// tim max trai , mã phai 
// min left right
// lay mãx be hon tru di a[i]
#include<vector>
#include<iostream>
#include<numeric>
#include<math.h>
#define int long long 
using namespace std;
int mymax(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int n , res = 0;
    cin >> n; 
    vector<int> a(n,0), l(n,0), r(n,0);
    for(int i = 0; i < n; i++) cin >> a[i];
    partial_sum(a.begin(), a.end(), l.begin(), mymax);
    partial_sum(a.rbegin(), a.rend(), r.rbegin(), mymax);
    
    for(int i = 1; i < n - 1; i++) {
        if(l[i - 1] > a[i] && r[i + 1] > a[i]) {
            res += min(l[i - 1],r[i + 1])-a[i];
        }
    }
    cout << res << endl;
    return 0;

}
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long n, res = 0 , k;
    cin >> n >>k;
    long a[n];
    for(auto &x : a) cin >>x;
    sort(a,a+n,greater<long>());
    for(int i = 0; i < n && a[i] >k*i;i++) {
        res += a[i] - i *k;
    }
    cout <<res;
    return 0;
}
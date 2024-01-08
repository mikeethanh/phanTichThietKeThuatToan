#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countWays(int n) {
    vector<bool> isPrime(n + 1, true);
    vector<int> primes;

    // Sàng Eratosthenes để tìm các số nguyên tố từ 2 đến n
    for(int i = 2 ; i <= n ; i++) {
        if(isPrime[i]) {
            for(int j = i*i ; j <= n ; j +=i) {
                isPrime[j] = false;
            }
        }
    }

    // Lưu các số nguyên tố vào vector primes
     for(int i=2 ; i < n ; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
        }
     }

    int count = 0;

    // Duyệt qua tất cả các cặp số nguyên tố (a, b)
    for (int i = 0; i < primes.size(); ++i) {
        for (int j = i; j < primes.size(); ++j) {
            int a = primes[i];
            int b = primes[j];
            int c = n - a - b;

            // Kiểm tra xem c có phải số nguyên tố không
            if (c >= b && isPrime[c]) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    if (n > 6 && n < 100000) {
        int result = countWays(n);
        cout << result << endl;
    }
    return 0;
}

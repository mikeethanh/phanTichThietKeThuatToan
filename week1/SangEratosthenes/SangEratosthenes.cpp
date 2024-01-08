// ý tưởng thuật toán : loại bỏ các bội số của các số nguyên tố từ dang sách 
// số nguyên cho trước

// áp dụng : 
//Trong mã hóa, một ứng dụng phổ biến của việc tìm số nguyên tố là trong việc tạo khóa mật mã.
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int countPrimesInRange(int L, int R) {
    // Khởi tạo mảng lưu trữ các số nguyên tố trong đoạn [L, R]
    vector<bool> isPrime(R - L + 1, true); 

    for (int i = 2; i <= sqrt(R); i++) {
        //cong thuc boi cua 1 so nam trong khoang l -> r chia het cho i         
        for (int j =max(i*i,(L+i-1/i*i)); j <= R; j += i) {
                isPrime[j - L] = false; // Đánh dấu số không phải số nguyên tố
        }
    }

    int count = 0;
    for (int i = L; i <= R; ++i) {
        if (isPrime[i - L] && i > 1) // Kiểm tra và đếm số nguyên tố
            count++;
    }

    return count;
}

int main() {
    int L, R;
    cin >> L;
    cin >> R;

    int primesCount = countPrimesInRange(L, R);
    cout<< primesCount << endl;

    return 0;
}
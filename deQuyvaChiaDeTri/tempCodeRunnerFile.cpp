#include<iostream>
using namespace std;

int tach(int n) {
    if(n <= 4 or n % 2) return 1;
    return tach(n / 2 + 2) + tach(n / 2 - 2);
}

int main() {
    cout << tach(60) ; 
}
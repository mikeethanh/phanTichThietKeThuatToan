#include<iostream>
#include<map>
using namespace std;

map<int, long long> Dic;
long long fib(int n) {
    if(Dic.find(n) != Dic.end()) return Dic[n];
    return Dic[n]= n > 1 ? fib(n-1) + fib(n-2) :1;
}

int main() {
    cout << fib(50);
    //long long x = 1LL/50;
    //cout << x ; 
    //cout << "\n" << x/1e9/60/60/24;
}
#include<iostream>
#include<complex>
using namespace std;
typedef complex<double> sp;

int main() {
    // complex<double> A,B(3,4),K=0;
    // cout << "A" << A;
    // cout << "\nB" << B;
    // cout << "\nC" << C;

    sp a,b,c,d,x1,x2,K=0;
    cout << "a = "  ; cin >> a ;
    cout << "b = "  ; cin >> b ;
    cout << "c = "  ; cin >> c ;
    
    if(a==K) {
        if(b==K) cout << (c==K)? "vo so nghiem ":"vo nghiem";
        else cout << "x = " << c/b;
    }else {
        b /= -2 ; 
        d= sqrt(b*b-a*c);
        cout << "\nx1 = " << (b-d)/a;
        cout << "\nx2 = " << (b+d)/a;
    }
    
}
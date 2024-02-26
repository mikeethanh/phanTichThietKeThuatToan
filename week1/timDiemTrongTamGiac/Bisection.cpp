//cho tam giac ABC va diem M , hay tim 1 diem trong tam giac gan voi M nhat (bisection)
#include<iostream>
#include<math.h>
using namespace std;
//kieu đu lieu pair
typedef pair<double,double> Diem;
#define x first  
#define y second
//gioi han sai so
double const eps = 1e-4;

// định thức sư dụng để tính diện tích mà không có sai số 
double dt(Diem A , Diem B) {
    return A.x*B.y - A.y*B.x;
}

//công thức tính diện tích mà không có sai số 
double S(Diem A , Diem B , Diem C) {
    return abs(dt(A,B) + dt(B,C) + dt(C,A))/2;
}

// bình phương khoảng cách 
double bpkc(Diem A , Diem B) {
    return (A.x - B.x) *(A.x-B.x) +(A.y-B.y) *(A.y-B.y);
}

Diem tim(Diem A , Diem B , Diem M) {
    //lặp đến khi nào mà khoảng cách giữa 2 điểm quá nhỏ thì stop
    while(abs(A.x - B.x ) > eps or abs(A.y - B.y) > eps) {
        Diem H = {(A.x + B.x)/2 , (A.y + B.y)/2};
        bpkc(M,A) > bpkc(M,B)?A = H : B = H;
    }           
    return A ;
}

int main() {
    // pair<double,double> A(3,4), B = A,C,D,E;
    // cout << "\nB" << B.first << " " << B.second ;
    // //tao pair;
    // C = make_pair(4,5);
    // D = pair<double,double> (6,7);
    // E = {1,2};
    // cout << "\nC" << C.first << " " << C.second ;
    // cout << "\nD" << D.first << " " << D.second ;
    // cout << "\nE" << E.first << " " << E.second ;

    Diem  A,B,C,M;
    
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> M.x >> M.y ;
    //nếu như M không nằm trong tam giác ABC  
    if(S(A,B,C) < S(A,B,M) + S(A,C,M) + S(B,C,M)) {
        Diem A1 = tim(B,C,M), B1 =tim(A,C,M) , C1 = tim(A,B,M);
        if(bpkc(A1,M)>bpkc(B1,M)) A1 = B1;
        if(bpkc(A1,M)>bpkc(C1,M)) A1 = C1;
        M =A1;                     
    }
    //nếu như M nằm trong tam giác ABC thì in ra luôn điểm M 
    // điểm gần M nhất nằm trong tam giác ABC vẫn là điểm M 
    cout << M.first << " " << M.second;
}

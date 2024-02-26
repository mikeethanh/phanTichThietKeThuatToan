// cho tam giac ABC tim M sao cho MA + MB +MC min
// y tuong : + chon M bat ki(trung tuyen) 
            
           //+ d = 10 
           //ưhile(d > eps)
           // (tim cac diem hang xom cua M , diem nao tot hon , nhay sang diem do )
           // nếu tất cả các điểm đều xấu, giảm d đi 1 nửa sau đó lắm lại bước 2 cho đén khi nào d < eps)

#include<iostream> 
#include<math.h>
#include<iomanip>
using namespace std;
typedef pair<double,double> diem;
#define x first 
#define y second
const double eps = 1e-4;
double kc(diem A , diem B) {
    A.x -= B.x;
    A.y -= B.y;
    return sqrt(A.x*A.x + A.y*A.y);
}

int main() {
    diem A,B,C,M;

    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
    M = {{(A.x+B.x +C.x)/3},{(A.y+B.y +C.y)/3}};
    double k = kc(A,M) +kc(B,M)+ kc(C,M), d = 10;
    while(d > eps) {
        diem Next[] = {{M.x-d,M.y}, {M.x+d,M.y},{M.x,M.y-d}, {M.x,M.y+d}}; 
        for(diem N:Next) {
            double z = kc(A,N) +kc(B,N) + kc(C,N);
            if(z < k) {
                k = z; M = N; d = d * 2;
                break;
            }
             else {d /= 2;}
    
        }
    }
    cout << setprecision(3) << fixed <<M.x << " " << M.y;
}
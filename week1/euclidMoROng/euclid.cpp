//Thuật toán Euclid mở rộng là một phương pháp để tìm ước số chung lớn nhất (USCLN) của hai số nguyên dương 
//a và b. Nó mở rộng thuật toán Euclid cơ bản bằng cách tính toán các hệ số x và y sao cho ax+by=USCLN(a,b).
//Ở mỗi bước đệ quy, chúng ta sẽ tính x và y từ việc sử dụng kết quả trả về từ bước trước đó. Quá trình này 
//tiếp tục cho đến khi chúng ta đạt được giá trị USCLN và có thể suy ra x và y.
#include <iostream>
using namespace std;

int extendedEuclidean(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0;
        y = 1;
        return b;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b % a, a, x1, y1);

    x = y1 - (b / a) * x1;
    y = x1;

    return gcd;
}

int main() {
    int a, b;
    cout << "Nhap hai so nguyen duong a va b: ";
    cin >> a >> b;

    int x, y;
    int gcd = extendedEuclidean(a, b, x, y);

    cout << "USCLN cua " << a << " va " << b << " la: " << gcd << endl;
    cout << "x va y la: " << x << " " << y << endl;

    return 0;
}

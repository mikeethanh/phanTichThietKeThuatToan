//tinh dien tich tu giac su dung dinh thuc trong tam giac 
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

typedef pair<double, double> Point;
#define x first  
#define y second

double calculateArea(Point A, Point B, Point C, Point D) {
    double area = 0.5 * abs(A.x * B.y + B.x * C.y + C.x * D.y + D.x * A.y - B.x * A.y - C.x * B.y - D.x * C.y - A.x * D.y);
    return area;
}

int main() {
    Point A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;

    double result = calculateArea(A, B, C, D);
    cout << fixed << setprecision(3) << result << endl;

    return 0;
}

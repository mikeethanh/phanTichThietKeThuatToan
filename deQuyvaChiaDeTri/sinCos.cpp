#include<iostream>
#include<math.h>
using namespace std;
double SIN(double);
double COS(double);
double ABS(double x) {
    return x > 0 ? x : -x;
}

double SIN(double x) {
    if(ABS(x) < 1e-4) return x;
    return 2 * SIN(x/2) * COS(x/2);
}

double COS(double x) {
    if(ABS(x) < 1e-4) return 1;
    double u = SIN(x/2), v = COS(x/2);
    return v * v - u * u;
}

int main() {
    for(double x = -5; x <= 5; x += 0.3) {
        cout << SIN(x) << " " << COS(x) << endl;
        cout << sin(x) << " " << cos(x) << endl;
    }
}
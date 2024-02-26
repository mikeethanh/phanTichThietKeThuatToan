//tim cac so nguyen to tu left den right 
#include<iostream>
#include<vector>
using namespace std;

vector<int> sang(int n) {
    bool s[n+5] = {};
    //danh dau cac index la so nguyen to sau do sang loc dan 
    fill(s+2,s+n+1,true); //s2 = .....sn =true;
    //khai bao vector P de chua cac so ngguyen to 
    vector<int> P;

    for(int i = 2 ; i < n ; i++) {
        //neu s[i] la so nguyen to
        if(s[i] == true) { 
            P.push_back(i);
            //tim cac so la boi cua cac so dang xet va loai bo
            for(int j = i*i ; j <= n ; j+=i) {
                s[j] = false;
            }
        }

    }
    return P;

}
int main() {
    vector<int>  p = sang(1000);
    for(auto x : p) {
        cout << x << " ";
    }

}
#include <iostream>
using namespace std;

int main() {
    int n,x,s=0,t,c;
    cin>>n;
    for(int i = 1; i<=n;i++){
    	cin>>x;
    	s+=x;
    	x=x?-1:1;
    	if(i==1) t= c =x;
    	else { c= max(c,0)+x;
    		t = max (c,t);
		}
	}
	cout<<s+t;
}


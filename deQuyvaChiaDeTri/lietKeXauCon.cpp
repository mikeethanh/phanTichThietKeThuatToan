#include<bits/stdc++.h>
using namespace std;
set<string> Dic;
void lietke(string x){
	if( x=="") return;
	if(Dic.find(x)== Dic.end()){
		Dic.insert(x);
		lietke(x.substr(0,x.size()-1));
		lietke(x.substr(1,x.size()-1));
	}
}

int main(){
	string s;
	cin>> s;
	lietke(s);
	for(auto z: Dic) cout<<z<<endl;
}
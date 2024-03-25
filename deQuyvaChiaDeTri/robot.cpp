#include<bits/stdc++.h>

using namespace std;

set<pair<int,int>>S;
void DFS(int x, int y){
	if(S.find({x,y})==S.end()){
		S.insert({x,y});
		if(x%2==0) DFS(y,x/2); 
		if(y%2) DFS((y/2)+1,x); 
		
	}
}

int main()
{

 int x,y;
 cin>>x>>y;
 DFS(x,y);
 cout<<S.size();
}
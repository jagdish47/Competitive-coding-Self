#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		

	
	int x, y;
	cin>>x>>y;
	
	y = y * 2;
	
	if(x >= y){
		cout<<"Yes"<<"\n";
	}
	else{
		cout<<"No"<<"\n";
	}
	
	
	return 0;
}
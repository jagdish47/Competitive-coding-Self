#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int tc;
	cin>>tc;
	
	while(tc--){
		int x,y;
		cin>>x>>y;
		
		if(x > y){
			cout<<"NEW PHONE"<<"\n";
		}
		else if(x < y){
			cout<<"REPAIR"<<"\n";
		}else{
			cout<<"ANY"<<"\n";
		}
	}
	return 0;		
}
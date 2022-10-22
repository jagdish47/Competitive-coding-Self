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
		
		int x, y, z;
		cin>>x>>y>>z;
		
		if(x > y && x > z){
			cout<<"Setter"<<"\n";
		}else if(y > x && y > z){
			cout<<"Tester"<<"\n";
		}else{
			cout<<"Editorialist"<<"\n";
		}
	}
	
	return 0;
}
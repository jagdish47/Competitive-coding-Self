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
		int x;
		cin>>x;
		
		
		if(x >= 1 && x <= 50){
			cout<<"LEFT"<<"\n";
		}
		else{
			cout<<"RIGHT"<<"\n";
		}
	}		
		
		
	return 0;
}
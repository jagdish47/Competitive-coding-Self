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
		
		float a, x, b, y;
		cin>>a>>x>>b>>y;
		
		float aliceSpeed = a / x; 
		float bobSpeed = b / y;
		
		if(aliceSpeed == bobSpeed){
			cout<<aliceSpeed<<" "<<bobSpeed<<" ";
			cout<<"Equal"<<"\n";
		}
		else if(aliceSpeed > bobSpeed){
			cout<<"Alice"<<"\n";
		}
		else{
			cout<<"Bob"<<"\n";
		}
	}		
		

	return 0;
}
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
		int bPercentage;
		cin>>bPercentage;
		
		
		if(bPercentage <= 15){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
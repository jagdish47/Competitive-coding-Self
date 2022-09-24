#include<bits/stdc++.h>
#include<vector>
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
		
		if(x < 7){
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}	
	
	
	
	return 0;
}
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
		long long len, k;
		cin>>len>>k;
		
		
		if(len % k == 0){
		    cout<<"0"<<"\n";
		}else{
		    cout<<"1"<<"\n";
		}
		
	}		
	
	return 0;
}
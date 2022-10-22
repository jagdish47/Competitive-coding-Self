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
		int x, y;
		cin>>x>>y;
		
		
		int per = (y*100)/x;
	    
	    if(per >= 50){
	        cout<<"YES"<<"\n";
	    }
	    else{
	        cout<<"NO"<<"\n";
	    }
		
	}
	
	return 0;
}
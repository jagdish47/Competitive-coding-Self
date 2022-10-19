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
	    
	    if(x % 2 == 0 && y % 2 == 0 && z % 2 == 0){
	        cout<<"NO"<<"\n";
	    }
	    else if(x % 2 == 1 && y % 2 == 1 && z % 2 == 1){
	        cout<<"NO"<<"\n";
	    }else{
	        cout<<"YES"<<"\n";
	    }
	}
	
	return 0;
}
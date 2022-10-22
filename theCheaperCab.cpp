#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	int x, y;
	
	while(tc--){
	    
	    cin>>x>>y;
	    
	    if(x == y){
	    	cout<<"ANY"<<endl;
	    	
	    }
	    else if(x > y){
	    	cout<<"SECOND"<<endl;
	    }
	    else{
	    	cout<<"FIRST"<<endl;
	    }
	    
	}
	return 0;
}
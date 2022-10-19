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
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    int count = 0;
	    if(n > 1){
	    	
	    	for(int i = 0; i < n; i++){
	    		if(str[i] == str[i+1]){
	    			count++;
	    		}
	    	}
	    }
	    
	    cout<<count<<"\n";
	   
	}
	
	return 0;
}
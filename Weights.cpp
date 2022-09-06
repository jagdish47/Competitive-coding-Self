#include <bits/stdc++.h>
using namespace std;


int main(){
	
#ifndef a
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	
#endif
	
	
	int tc;
	cin>>tc;
	
	while(tc--){
		int w, x, y, z;
		cin>>w>>x>>y>>z;
		
		
		if(w==x || w == y || w == z){
			cout<<"Yes"<<"\n";
		}
		else if((x+y == w) || (x+z == w) ||(y+z == w)){
			cout<<"Yes"<<"\n";	
		}
		else if(x+y+z == w)
		{
			cout<<"Yes"<<"\n";
		}
		else{
			cout<<"No"<<"\n";
		}
	}
	return 0;
}
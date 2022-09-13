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
		int w, x, y, z;
		cin>>w>>x>>y>>z;
		
		
		int getLose = x - y;
		
		if(getLose < 0){
			int getLoseNew = abs(x - y);
			int ans = w - getLoseNew  * z;
			cout<<ans<<"\n";
		}
		else{
			int ans = w + getLose * z;
			cout<<ans<<"\n";
		}
		
	}
	
	return 0;
}
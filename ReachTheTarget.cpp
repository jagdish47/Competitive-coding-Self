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
		
		int ans = x - y;
		
		cout<<ans<<"\n";
	}
	
	return 0;
}
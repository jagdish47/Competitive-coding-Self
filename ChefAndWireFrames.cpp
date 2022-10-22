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
		int n, m, x;
		cin>>n>>m>>x;
		
		
		int ans = ((2 * n) + (2 * m)) * x;
		
		cout<<ans<<"\n";
	}		
	
}

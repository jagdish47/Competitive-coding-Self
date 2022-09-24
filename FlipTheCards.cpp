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
		
		int n, x;
		cin>>n>>x;
		
		int up = x;
		int down = n - x;
		
		
		
		cout<<min(up, down)<<"\n";	
	}
	
	
	return 0;
}
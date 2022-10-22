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
		
		float per = 1.07 * x;
		
		if(y <= per){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
		
		
	}
}
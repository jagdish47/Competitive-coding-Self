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
		int x;
		cin>>x;
		
		if(x % 25 == 0){
			cout<<x / 25<<"\n";
		}else{
			cout<<(x / 25) + 1<<"\n";
		}
	}
	
	return 0;
}
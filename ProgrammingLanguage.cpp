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
		int a,b,a1,b1,a2,b2;
		cin>>a>>b>>a1>>b1>>a2>>b2;
		
		
		int min_ab = min(a, b);
		int max_ab = max(a, b);
		
		int min_a1b1 = min(a1, b1);
		int max_a1b1 = max(a1, b1);
		
		int min_a2b2 = min(a2, b2);
		int max_a2b2 = max(a2, b2);
		
		if(max_ab == max_a1b1 and min_ab == min_a1b1){
			cout<<"1"<<"\n";
		}
		else if(max_ab == max_a2b2 and min_ab == min_a2b2){
			cout<<"2"<<"\n";
		}
		else{
			cout<<"0"<<"\n";
		}
	}		
	
	
	return 0;
}
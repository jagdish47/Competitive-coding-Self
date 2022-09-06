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
		int A, B, C;
		cin>>A>>B>>C;
		
		float average = float(A + B) / 2;
		
		
		if(average > C){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
	return 0;
}
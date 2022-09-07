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
		
		int N,K;
		cin>>N>>K;
		
		int sum=K*(K+1)/2;
		
		if(N>=sum)
		{
			cout<<"Yes"<<endl;
		
		}
		else{
			cout<<"No"<<endl;
			
		}
	}
	
	return 0;
}
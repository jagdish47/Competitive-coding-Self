#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int tc;
	cin>>tc;
	
	while(tc--){
		int N, M, K;
		cin>>N>>M>>K;
		
		int newSize = M - K;
		
		if(newSize >= N){
			cout<<"YES"<<"\n";
		}
		else{
			cout<<"NO"<<"\n";
		}
		
		
	}
	
	return 0;
}
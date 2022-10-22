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
		long long N, M;
		cin>>N>>M;
		
		
		long long arr[N];
		
		for(int i = 0; i < N; i++){
			cin>>arr[i];
		}
		
		long total = 0;
		long maxi = M;
		long mini = 1;
		
		for(int i = 0; i < N; i++){
			 total += max(abs(arr[i] - 1), abs(arr[i] - maxi));
		}
		
		cout<<total<<"\n";
	}	
	
	
	return 0;
}
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
		int n, k;
		cin>>n>>k;
		
		int arr[n];
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		
		for(int i = 0; i < n; i++){
			if(arr[i] < k){
				cout<<"No"<<"\n";
				break;
			}
			else{
				cout<<"Yes"<<"\n";
				break;
			}
		}
		
	}
	
	return 0;
}
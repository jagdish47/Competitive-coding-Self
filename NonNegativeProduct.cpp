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
		int n; 
		cin>>n;
		
		int arr[n];
		
		for(int i = 0; i < n; i++){
			cin>>arr[i];
		}
		
		int zero = 0;
		int neg = 0;
		
		for(int i = 0; i < n; i++){
			if(arr[i] == 0){
				zero++;
			}
			
			if(arr[i] < 0){
				neg++;
			}
		}
		
		if(zero > 0){
			cout<<"0"<<"\n";
		}
		else if(neg % 2 == 0){
			cout<<"0"<<"\n";
		}else{
			cout<<"1"<<"\n";
		}
		
		
		
	
	}
	
	return 0;
}
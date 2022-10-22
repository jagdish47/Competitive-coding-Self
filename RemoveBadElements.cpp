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
		
		int len;
		cin>>len;
		
		int arr[len];
		
		for(int i = 0; i < len; i++){
			cin>>arr[i];
		}
		
		
		// for(int i = 0; i < len; i++){
		// 	cout<<arr[i]<<" ";
		// }
		// cout<<endl;
		
		int max = 0;
		
		for(int i = 0; i < len; i++){
			
			for(int j = i+1; j < len; j++){
				if(arr[i] == arr[j]){
					max = arr[i];
				}
			}
		}
		
		int count = 0;
		
		for(int i = 0; i < len; i++){
			if(max != arr[i]){
				count++;
			}
		}
		
		if(len == 0){
		    cout<<0<<"\n";
		}
		else if(max == 0){
			cout<<len - 1<<"\n";
		}
		else{
			cout<<count<<"\n";
		}
		
	}
	
	return 0;
}
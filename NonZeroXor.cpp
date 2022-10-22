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
		
		int size;
		cin>>size;
		
		int arr[size];
		
		for(int i = 0; i < size; i++){
			int val;
			cin>>val;
			
			arr[i] = val;		
		}
		
		int max = 0;
		
		for(int i = 0; i < size; i++){
			int count = 0;
			
			for(int j = 0; j < size; j++){
				
				if(arr[i] == arr[j]){
					count++;
				}
				
			}
			
			if(count > max){
				max = count;
			}
			
			if(max == 1){
				max = 0;
			}
			
			
		}
		
			cout<<max<<"\n";
		
		
		
	}			
	
	return 0;
}
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
			
			for(int j = i; j < size; j++){
				
				if(arr[i] == arr[j]){
					count++;
				}
			}
			if(max < count){
				max = count;
			}
		}
		
		cout<<size - max<<"\n";
		
	}
	return 0;
}
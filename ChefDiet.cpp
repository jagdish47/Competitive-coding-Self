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
		
		int days, protein;
		cin>>days>>protein;
		
		
		int arr[days];
		
		for(int i = 0; i < days; i++){
			cin>>arr[i];
		}
		
		int store = 0;
		
		for(int i = 0; i < days; i++){
			if(arr[i] >= protein){
				store = arr[i] - protein;
			}
			else if(arr[i] < protein){
				int a = arr[i] + store;
				
				if(a >= protein){
					store = arr[i] - protein;
					cout<<"Yes"<<"\n";
				}
				else{
					cout<<"No "<<i+1<<"\n";
				}
			}
			
		}
	}		
	
	return 0;
}
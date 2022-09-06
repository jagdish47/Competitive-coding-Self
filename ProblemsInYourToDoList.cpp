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
		
		int size;
		cin>>size;
		
		int arr[size];
		
		for(int i = 0; i < size; i++){
			int D;
			cin>>D;
			arr[i] = D;
		}	
		
		int count = 0;
		for(int i = 0; i < size; i++){
			if(arr[i] >= 1000){
				count++;
			}
		}
		
		cout<<count<<"\n";
	}
	
}



#include<bits/stdc++.h>
#include<stack>
using namespace std;



int main(){

	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int tc;
	cin>>tc;
	
	while(tc--){
		int size1;
		cin>>size1;
		
		int arr[size1];
		
		for(int i = 0; i < size1; i++){

			cin>>arr[i];
			
		}
		
		int size2;
		cin>>size2;
		
		int arr2[size2];
		
		for(int i = 0; i < size2; i++){
			cin>>arr2[i];
		}	
		
		std::vector<int> v;
		
		for(int i = 0; i < size2; i++){
			
			for(int j = 0; j < size1; j++){
				if(arr2[i] == arr[j]){
					arr.pop();
				}
			}
		}
		
		for(int l = 0; l < size2; l++){
			cout<<arr[l];
		}	
		
	return 0;
	}
}
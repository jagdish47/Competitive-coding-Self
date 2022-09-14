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
			cin>>arr[i];
		}
		
		int x = 0;
		for(int i = 0; i < size; i++){
			x = x ^ arr[i];
		}
		
		cout<<x<<endl;
	}		
	
	return 0;
}
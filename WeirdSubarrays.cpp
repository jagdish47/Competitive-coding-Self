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
		
		int n;
		cin>>n;
		
		int arr[n];
		for(int i = 0; i < n; i++){
			int val;
			cin>>val;
			arr[i] = val;
		}
		
		for(int i = 0; i < n; i++){
			cout<<arr[i] + " ";
		}
		cout<<"\n";
	}
	return 0;
}
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
		
		int arr[3];
		int x, y, z;
		
		cin>>arr[0]>>arr[1]>>arr[2];
		
		sort(arr, arr+3);
		
		int ans = 0;
		
		for(int i = 0; i < 3; i++){
			if(arr[i] > 1){
				ans++;
			}
		}
		
		if(arr[0] == 2){
			cout<<arr[2] ? ans+2:res+1<<"\n";
		}
		
		else if(arr[0] >= 3){
			cout<<res+3<<"\n";
		}
		
		else{
			cout<<y <= 1 ? res : res+1<<"\n";
		}
	}		
		
	return 0;
}
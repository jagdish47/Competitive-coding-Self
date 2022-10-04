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
		
		int e_count = 0;
		int o_count = 0;
		
		for(int i = 0; i < len; i++){
			if(arr[i] % 2 == 0){
				e_count++;
			}
			else{
				o_count++;
			}
		}
		
		if(e_count == len || o_count == len){
			cout<<"0"<<"\n";
		}else{
			cout<<min(o_count, e_count)<<"\n";
		}
		
	}
	
	return 0;
}
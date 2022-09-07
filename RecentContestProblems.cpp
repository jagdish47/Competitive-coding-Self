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
		
	
		
		string arr[size];
		
		int sCount = 0;
		int lCount = 0;
		
			
		for(int i = 0; i < size; i++){
			string val;
			cin>>val;
			arr[i] = val; 		
		}
		
		for(int i = 0; i < size; i++){
			if("START38" == arr[i]){
				sCount++;
			}else{
				lCount++;
			}
		}
		
		cout<<sCount<<" "<<lCount<<"\n";
	}
	
}
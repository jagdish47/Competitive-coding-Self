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
		string str;
		
		cin>>size;
		cin>>str;
		
		string con = "bcdfghjklmnqprstvwxyz";
		int count = 0;
		bool hard = false;
		
		for(int i = 0; i < size; i++){
			
			if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
				count = 0;
			}
			else{
				count++;
				if(count >= 4){
					hard = true;
				}
			}
		}
		
		if(hard){
			cout<<"NO"<<"\n";
		}
		else{
			cout<<"YES"<<"\n";
		}
		
	}
		
		
	return 0;		
}
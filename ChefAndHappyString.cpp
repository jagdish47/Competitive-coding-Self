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
		
		string str;
		cin>>str;
		
		bool is_vowel = false;
		
		
		for(int i = 0; i < str.length(); i++){
			
			string bag = "";
			
			
			for(int j = i + 1; j < str.length(); j++){
				
				if(bag.length() > 2){
					
					for(int k = 0; k < bag.length(); k++){
						
						if(bag[i] == 'a' || bag[i] == 'e' || bag[i] == 'i' || bag[i] == 'o'|| bag[i] == 'u'){
							is_vowel = true;
						}
						else{
							is_vowel = false;
							break;
						}
					}
				}
				else{
					break;
				}
			}
			
		}
		
		if(is_vowel== true){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	}
	
	return 0;
}
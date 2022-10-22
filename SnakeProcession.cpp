#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int R;
	cin>>R;
	
	
	while(R--){
		int len;
		cin>>len;
		
		string str;
		cin>>str;
		
		// taking new string only add H and T remove (.)
		string store = "";
		
		for(int i = 0; i < len; i++){
			
			if(str[i] != '.'){
				store += str[i];
			}
		}
		
		// Intially we keep answer as true
		bool ans = true;
		
		
		// if lenth is not even than it false each snake have H and T
		if(store.length() % 2 != 0){
			ans = false;
		}
		else{
			for(int i = 0; i < store.length(); i++){
				// check each Even have H
				if(i % 2 == 0)
				{
					if(store[i] == 'T')
					{
						ans = false;
					}
				}
				else
				{
					// each odd have T
					if(store[i] == 'H')
					{
						ans = false;
					}
				}
			}
		}
		
		
		if(ans){
			cout<<"Valid"<<"\n";
		}
		else{
			cout<<"Invalid"<<"\n";
		}
	}
	
	return 0;
}
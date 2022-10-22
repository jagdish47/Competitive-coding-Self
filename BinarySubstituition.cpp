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
		
		std::vector<string> v;
		int count = 0;
		for(int i = 0; i < str.length(); i++){
			
			string bag = "";
			for(int j = i; j < str.length(); j++){
				
				bag += str[j];
				// v.push_back(bag);
				
				if(bag == "a" || bag == "b" || bag == "ab" || bag == "ba"){
					count++;
				}
				
				
			}
			
		}
		
		cout<<count<<"\n";
		
		// for(int k = 0; k < v.size(); k++){
		// 	cout<<v[k]<<"\n";
		// }
	}
	
	return 0;
}
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
		
		string str;
		cin>>str;
		
		for(int i = 0; i < len; i++){
			char temp = str[i];
			str[i] = str[i+1];
			temp = str[i+1];
		}
		
		cout<<str<<endl;
	}
	
	
	return 0;
}
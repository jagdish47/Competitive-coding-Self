#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	#ifndef first
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	
	int tc;
	cin>>tc;
	
	while(tc--){
		
		int first, second, third;
		cin>>first>>second>>third;
		
		if(first <= second){
			
			if((second - first) % (third * 2) == 0){
				cout<<"yEs"<<"\n";
			}
			else{
				cout<<"nO"<<"\n";
			}
		}
		else{
			if((second - first) % (third * 2) == 0){
				cout<<"yEs"<<"\n";	
			}
			else{
				cout<<"nO"<<"\n";
			}
		}
	}

	return 0;
}
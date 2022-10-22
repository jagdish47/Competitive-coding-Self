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
		int a, b, c;
		cin>>a>>b>>c;
		
		
		int first = abs(b - c) + abs(c - 1);
		int second = abs(a - 1);
		
		
		if(first > second){
			cout<<"1"<<"\n";
		}
		else if(first < second){
			cout<<"2"<<"\n";
		}
		else{
			cout<<"3"<<"\n";
		}
	}		
		
		
	return 0;
}



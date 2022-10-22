#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int R;
	cin>>R;
	
	
	if(R >= 1 && R <= 50){
		cout<<"100"<<"\n";
	}
	else if(R > 50 && R <= 100){
		cout<<"50"<<"\n";	
	}
	else{
		cout<<"0"<<"\n";
	}
	
	return 0;
	
	
}
#include<bits/stdc++.h>
using namespace std;


int main(){
	int tc;
	cin>>tc;
	
	
	while(tc--){
		int X, P, Q;
		cin>>X>>P>>Q;
		
		int remain = P - Q;
		
		int fine = X * remain;
		
		cout<<fine<<"\n";
		
	}
}
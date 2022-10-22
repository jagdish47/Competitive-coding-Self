#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	
	int ans = (a + b) * (c - d);
	
	
	cout<<ans<<"\n";
	fflush(stdout);
	cout<<"Takahashi"<<"\n";
	
	
	return 0;
}
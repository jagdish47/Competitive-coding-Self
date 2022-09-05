#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	
	int X, Y;
	
	while(tc--){
		
		cin>>X>>Y;
		
		int ans = X - Y;
		cout<<abs(ans)<<"\n";
			
	}
	return 0;
}
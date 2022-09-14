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
		long long maxT, maxN, sumN;
		cin>>maxT>>maxN>>sumN;
		
		long long ans = 0;
		
		
		while(maxT-- && sumN>0){
			
			if(sumN >= maxN){
				ans = ans + pow(maxN, 2);
				sumN = sumN - maxN;
			}
			else{
				ans = ans + pow(sumN, 2);
				break;
			}
		}
		
		cout<<ans<<"\n";
	}		
		
	
	
	return 0;
}
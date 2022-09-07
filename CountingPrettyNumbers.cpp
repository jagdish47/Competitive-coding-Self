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
		int L,R;
		cin>>L>>R;
		
		int countPN = 0;
		
		for(int i = L; i <= R; i++){
			if(i == 2 || i == 3 || i == 9){
				countPN++;
			}
			else if(i % 10 == 2 || i % 10 == 3 || i % 10 == 9){
				countPN++;
			}
		}
		
		cout<<countPN<<"\n";
	}		
	
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
		
	int tc;
	cin>>tc;
	
	std::vector<int> v1;
	std::vector<int> v2;
	
	while(tc--){
		
		int a, b;
		cin>>a>>b;
		
			int i = 0;
			int diff = abs(a - b);
			
			v1.push_back(diff);
			
			if(a > b){
				v2.push_back(1);
			}else{
				v2.push_back(2);
			}		
			
		}
		int max = INT_MIN;
		int player = 0;
		
		for(int i = 0; i < v1.size(); i++){
			if(v1[i] > max){
				max = v1[i];
				player = v2[i];
			}
		}
		
		cout<<player<<" "<<max;
}

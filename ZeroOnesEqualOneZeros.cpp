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
		
		int n;
		cin>>n;
		
		string s = "";
		
		
		
		if(n==3){
			cout<<"010"<<"\n";
		}
		else if(n==4){
			cout<<"1001"<<"\n";
		}
		else if(n==5){
			cout<<"01010"<<"\n";
		}
		else if(n==6){
			cout<<"010010"<<"\n";
		}
		else{
			n = n - 3;
			s = "010";
			
			while(n != 3){
				n = n-1;
				s += "0";
			}
			
			s += "010";
			cout<<s<<"\n";
			
		}
	}	
		
	return 0;
}
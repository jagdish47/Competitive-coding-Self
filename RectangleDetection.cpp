#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
	string str;
	
	char arr[10][10];
	
	for(int i = 0; i < 10 ; i++){

		for(int j = 0; j < 10; j++){
			cin>>arr[i][j];
		}
	}
	
	
	vector<int> vec;
	vector<int> vec2;
	
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			
			if(arr[i][j] == '#'){
				vec.push_back(i + 1);
				
				vec2.push_back(j + 1);
				
			}
		}
	}
	
	
	cout<<vec[0]<<" ";
	cout<<vec[vec.size()-1];
	
	cout<<endl;
	
	cout<<vec2[0]<<" ";
	cout<<vec2[vec2.size()-1];
	
	
	
	
	return 0;
}
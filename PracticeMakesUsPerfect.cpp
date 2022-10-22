#include <bits/stdc++.h>
using namespace std;


int main(){
	#ifndef a
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
		
		
	
	int arr[4];
	
	int p1, p2, p3, p4;
	cin>>p1>>p2>>p3>>p4;
	
	arr[0] = p1;
	arr[1] = p2;
	arr[2] = p3;
	arr[3] = p4;
	
	int count = 0;
	
	for(int i = 0; i < 4; i++){
		if(arr[i] >= 10){
			count++;
		}
	}
	
	cout<<count;
	
}
#include<iostream>
using namespace std;

void coolEvaluation(int arr[], int n){

	int count = 0;
    for(int j = 0; j < n; j++){
        int ans = (3*j*j) + (2*j+j);
        for(int i = 0; i < n; i++){
	        if(arr[i] == ans){
		        count++;
	        }
        }
    }
  cout<<count<<"\n";
}

int main(){
    int arr[] = {3, 6, 2, 4, 6};
    coolEvaluation(arr, 5);
}
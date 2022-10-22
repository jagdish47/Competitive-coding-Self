#include<bits/stdc++.h>
using namespace std;

void singleOperation() {
   int in;
   string str;
   
   cin>>in;
   cin>>str;
   
   for(int i = 0; i < in; i++){
      if(str[i] == '0'){
         cout<<i<<"\n";
         return;
      }
   cout<<in<<"\n";
   }
}


int main() {
   int testcase;
   cin >> testcase;
   while(testcase--) 
   singleOperation();
}
#include<bits/stdc++.h>
using namespace std;

void singleOperation() {
   int in;
   string str;
   
   cin>>in;
   cin>>str;
   
   for(int i = 1; i < in; i++){
      if(str[i] == '1'){
         cout<<i<<"\n";
         return;
      }
   }
   cout<<in<<"\n";
}


int main() {
   int tc;
   cin>>tc;
   
   while(tc--){
      
      singleOperation();
      
   }
}
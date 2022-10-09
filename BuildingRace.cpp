#include<bits/stdc++.h>
using namespace std;

int main() {
        #ifndef a
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
        
    
    int tc;
    cin>>tc;
    
    while(tc--){
        
        float x, y, z, a;
        cin>>x>>y>>z>>a;

        float m, n;

            m = y / a;
            n = x / z;

            if(m<n){

                cout<<"Chefina"<<"\n";
            }
            else if(m>n){

                cout<<"chef"<<"\n";
            }
            else{

                cout<<"Both"<<"\n";
            }

    }
   
    return 0;
}
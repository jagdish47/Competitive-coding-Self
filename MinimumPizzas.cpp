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
		int x, y;
		
        cin>>x>>y;
        int s = x*y;
        
        int z = s % 4;
        if(z == 0)
        {
           cout<<s/4<<endl;
        }
        else
        {
           cout<<(s/4)+1<<endl;
        }
	}
	
	
	return 0;
}
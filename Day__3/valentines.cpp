#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x>=127){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
} 

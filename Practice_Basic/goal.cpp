#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int messi_goal=((2*a)+(1*b));
    cout<<messi_goal<<endl;
    int ronaldo_goal=((2*x)+(1*y));
    cout<<ronaldo_goal<<endl;
    if(messi_goal>ronaldo_goal){
        cout<<"Messi"<<endl;
    }else if(ronaldo_goal>messi_goal){
        cout<<"Ronaldo"<<endl;
        
    }else{
        cout<<"equal"<<endl;
    }
	// your code goes here

}
  
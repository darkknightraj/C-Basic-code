#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int min_investment= max(0,x-y);
        cout<<min_investment<<endl;

    }
    return 0;

}
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
        int each_test_case_point=(x/10);
        int score=each_test_case_point*y;
        cout<<score<<endl;
    }
}
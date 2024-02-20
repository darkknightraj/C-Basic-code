#include<iostream>
 using namespace std;
 int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int saving;
    cin>>saving;

    if(saving>5000){
        if(saving>10000){
            cout<<"Hotel With Neha";
        }
        else{
            cout<<"Road trip with Neha";
        }

    }
    else if(saving>2000){
        cout<<"Kavya";
    }
    else{
        cout<<"Suhani";
    }
    return 0;


 }
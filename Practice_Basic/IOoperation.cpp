#include<iostream>
using namespace std;
int main(){
    float f;
    char str[80];
    double d;
    cout<<"enter two floating  number";
    cin >> f >> d;
    cin.ignore();
    cout<<"enter a string";
    cin.getline(str,80);
    cout<<f<< " "<<d<<" "<<str ;
    return 0;
}
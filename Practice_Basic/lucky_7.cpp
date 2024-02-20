#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << s[6] << endl;
    }
    
    return 0;
}

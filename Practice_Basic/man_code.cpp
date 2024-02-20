#include <iostream>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int max_people, min_people;
        
        
        max_people = (N + 1) / 2;
        min_people = (N - 1)/2;
        
        cout << max_people << " " << min_people << endl;
    }
    
    return 0;
}
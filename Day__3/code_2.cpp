#include <iostream>
using namespace std;

int main() {
     #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // Input the number of test cases
    int t;
    cin >> t;

    // Process each test case
    while (t--) {
        // Input the total population and total number of literate people
        int p, l;
        cin >> p >> l;

        // Calculate literacy rate as a percentage
        int literacyRate = (l * 100) / p;

        // Check the condition and print the result
        if (literacyRate >= 75) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

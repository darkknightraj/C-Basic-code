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

        // Check if it is possible to make N zero using 3 and 4
        if (N % 3 == 0 || N % 4 == 0) {
            cout << "YES" << endl;
        } else {
            // Check for combinations of 3 and 4 to make N zero
            bool possible = false;
            for (int x = 0; x <= N / 3; x++) {
                int remainder = N - 3 * x;
                if (remainder % 4 == 0) {
                    possible = true;
                    break;
                }
            }

            cout << (possible ? "YES" : "NO") << endl;
        }
    }

    return 0;
}

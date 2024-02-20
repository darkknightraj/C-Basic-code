#include <iostream>
#include <string>

using namespace std;

int main() {
     #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        string scores[6];
        for (int i = 0; i < 6; ++i) {
            cin >> scores[i]; // Input scores for each ball
        }

        bool hattrick = false;
        for (int i = 0; i <= 3; ++i) {
            if (scores[i] == "W" && scores[i+1] == "W" && scores[i+2] == "W") {
                hattrick = true;
                break;
            }
        }

        if (hattrick) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

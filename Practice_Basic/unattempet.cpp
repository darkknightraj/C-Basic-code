#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    // Check if x and y lie within the specified range
    if (y < 1 || y > x || x > 1000) {
        cout << "Invalid input. Please ensure 1 ≤ Y ≤ X ≤ 1000." << endl;
        return 1; // Exit the program with an error code
    }

    int unattempted = (x - y);
    cout << unattempted;

    return 0;
}

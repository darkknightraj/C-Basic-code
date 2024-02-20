#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int a, b, c;
    cin>>a>>b>>c;

    // Assuming a, b, and c are initialized with some values.

    if (a > b) {
        if (a > c) {
            std::cout << "a" << std::endl;
        } else {
            std::cout << "c" << std::endl;
        }
    } else if (b > c) {
        std::cout << "b" << std::endl;
    } else {
        std::cout << "c" << std::endl;
    }

    return 0;
}

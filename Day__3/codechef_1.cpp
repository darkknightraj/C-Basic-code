#include <iostream>

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // Input
    int A, B, C;
    cin >> A >> B >> C;

    // Calculate total sales for Chef and Chefina
    int chefSales = A * C;
    int chefinaSales = B * C;

    // Find the maximum sales
    int maxSales = max(chefSales, chefinaSales);

    // Output the result
    cout << maxSales << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int cups;
    double price;

    cout << "How many cups do you want? ";
    cin >> cups;

    if (cups >= 10) {
        price = cups * 1.0 * 0.80;
    } else if (cups >= 5) {
        price = cups * 1.0 * 0.90;
    } else {
        price = cups * 1.0;
    }

    cout << "Final price: $" << price << endl;

    return 0;
}

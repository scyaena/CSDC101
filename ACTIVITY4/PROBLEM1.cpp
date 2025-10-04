Problem 1: Basic Pricing Decision

#include <iostream>
using namespace std;

int main() {
    int money;

    cout << "Enter your money: ";
    cin >> money;

    if (money >= 1.0) {
        cout << "Enjoy your lemonade!" << endl;
    } else {
        cout << "Sorry, you need more money." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int money;

    cout << "Enter your money: "; // Ask the user for the input
    cin >> money;

    if (money >= 1.0) {  // Decision-making using if statement

        cout << "Enjoy your lemonade!" << endl; // If the user has 1 or more dollars
    } else {
        cout << "Sorry, you need more money." << endl; // If the user has less than 1 dollar
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int problem;  // variable to store the user's selected problem number
    cout << "What problem do you want to see? ";
    cin >> problem; // get input from user

    switch (problem) { // to determine which problem to show
        case 1: // when user inputs 1
            cout << "Basic Pricing Decision Runs" << endl;
            break;
        case 2: // when user inputs 2
            cout << "Discount Calculator" << endl;
            break;
        case 3: // when user inputs 3
            cout << "Inventory Check" << endl;
            break;
        case 4: // when user inputs 4
            cout << "Temperature Converter" << endl;
            break;
        case 5: // when user inputs 5
            cout << "Player Movement" << endl;
            break;
        default: // runs when the user enters a number not between 1–5
            cout << "Invalid problem number" << endl;
    }

    return 0;
}

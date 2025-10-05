#include <iostream>
using namespace std;

int main() {
    int problem;
    cout << "What problem do you want to see? ";
    cin >> problem;

    switch (problem) {
        case 1:
            cout << "Basic Pricing Decision Runs" << endl;
            break;
        case 2:
            cout << "Discount Calculator" << endl;
            break;
        case 3:
            cout << "Inventory Check" << endl;
            break;
        case 4:
            cout << "Temperature Converter" << endl;
            break;
        case 5:
            cout << "Player Movement" << endl;
            break;
        default:
            cout << "Invalid problem number!" << endl;
    }

    return 0;
}

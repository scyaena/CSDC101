#include <iostream>
using namespace std;

int main() {
    // Ask the user how many lemons and how much sugar they have
    int lemons, sugar;

    cout << "Lemons: ";
    cin >> lemons;
    cout << "Sugar: ";
    cin >> sugar;

    // Check if there are enough ingredients to make lemonade
    if (lemons <= 0 || sugar <= 0) {
        // If either lemons or sugar is 0 or less, can't make lemonade
        cout << "You can't make lemonade!" << endl;
    } else {
        // If both are more than 0, you're good to go
        cout << "You're ready to sell lemonade!" << endl;
    }

    return 0;
}


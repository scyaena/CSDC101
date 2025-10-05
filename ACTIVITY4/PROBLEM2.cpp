#include <iostream>
using namespace std;

int main() {
    int temperature;

    cout << "Enter today's temperature in Celsius: ";  // Ask the user to enter today's temperature in Celsius
    cin >> temperature;

    if (temperature >= 30) { // Decide the price based on the weather
        cout << "It's hot! Lemonade costs $0.80 today." << endl;
    } else {
        cout << "Lemonade costs $1.00 today." << endl;
    }

    return 0;
}

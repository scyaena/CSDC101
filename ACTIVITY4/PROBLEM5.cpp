#include <iostream>
using namespace std;

int main() { // starting position of the player
    int x = 0, y = 0;
    char move; // to store the movement key

    cout << "Enter movement key (W/A/S/D): "; // ask the user for movement input
    cin >> move;

    if (move == 'W' || move == 'w') // Check which key is pressed and move accordingly
        y += 1; // move up
    else if (move == 'S' || move == 's') 
        y -= 1; // move down
    else if (move == 'A' || move == 'a')
        x -= 1; // move left
    else if (move == 'D' || move == 'd')
        x += 1; // move right
    else
        cout << "Invalid key" << endl;

    cout << "The location of the player is " << x << ", " << y << " " << endl;
    
    return 0;
}

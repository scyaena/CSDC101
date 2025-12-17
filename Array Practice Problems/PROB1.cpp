#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool ascending = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            ascending = false;
            break;
        }
    }

    if (ascending)
        cout << "The array is in ascending order.";
    else
        cout << "The array is not in ascending order.";

    return 0;
}

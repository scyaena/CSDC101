#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int sum = 0, even = 0, odd = 0;
    cin >> arr[0];
    int min = arr[0], max = arr[0];
    sum += arr[0];

    if (arr[0] % 2 == 0) even++;
    else odd++;

    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];

        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Sum: " << sum << endl;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;

    return 0;
}

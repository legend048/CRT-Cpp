#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int digit = i % 10;
        cout << "Reverse of " << i << " is: " << digit;
        int temp = i / 10;
        while (temp > 0) {
            digit = temp % 10;
            cout << digit;
            temp /= 10;
        }
        cout << endl;
    }
    return 0;
}
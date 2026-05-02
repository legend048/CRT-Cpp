#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 1) {
        cout << n << " is not a prime number.\n";
        return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << n << " is not a prime number.\n";
            return 0;
        }
    }
    cout << n << " is a prime number.\n";
    return 0;
}
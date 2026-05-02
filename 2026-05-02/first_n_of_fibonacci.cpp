#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 0, b = 1, c;
    cout << "First " << n << " numbers of Fibonacci sequence are: ";
    for(int i = 0; i < n; i++) {
        if(i <= 1)
            c = i;
        else {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << " ";
    }
    return 0;
}
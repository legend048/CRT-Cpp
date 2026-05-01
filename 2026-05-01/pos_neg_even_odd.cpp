#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num > 0) {
        if (num % 2 == 0) {
            cout << "Positive Even" << endl;
        } else {
            cout << "Positive Odd" << endl;
        }
    } else if (num < 0) {
        if (num % 2 == 0) {
            cout << "Negative Even" << endl;
        } else {
            cout << "Negative Odd" << endl;
        }
    } else {
        cout << "Zero" << endl;
    }    
    return 0;
}
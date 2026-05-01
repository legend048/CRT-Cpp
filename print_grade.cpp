#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number (0-100): ";
    cin >> num;
    
    if (num >= 90) {
        cout << "Grade: A" << endl;
    } else if (num >= 80) {
        cout << "Grade: B" << endl;
    } else if (num >= 70) {
        cout << "Grade: C" << endl;
    } else if (num >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    
    return 0;
}
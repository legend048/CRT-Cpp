#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
   while (n > 0)
    {
        int digit = n % 10;
        count++;
        n /= 10;
        cout<< count << endl;
    }
    cout << "Number of digits in " << n << " is: " << count << endl;
    return 0;
}
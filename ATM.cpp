#include <iostream>

using namespace std;

int main() {
    double balance = 0.0;
    int choice;

    while (true) {
        cout << "\n=== ATM Menu ===\n";
        cout << "1. Withdraw Money\n";
        cout << "2. Deposit Money\n";
        cout << "3. Check Balance\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                }
                break;
            }

            case 2: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;

                if (amount <= 0) {
                    cout << "Invalid amount.\n";
                } else {
                    balance += amount;
                    cout << "Deposit successful.\n";
                }
                break;
            }

            case 3:
                cout << "Current balance: " << balance << '\n';
                break;

            case 0:
                cout << "Thank you for using ATM.\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter 1, 2, 3, or 0.\n";
        }
    }
    return 0;
}
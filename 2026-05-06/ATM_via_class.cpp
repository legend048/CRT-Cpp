#include <iostream>
#include <string>

using namespace std;

class account{
    public:
        double balance;
        string name;
        account(string a, int b){
            balance = b;
            name = a;

        }
};

int main() {
    double initialBalance;
    int choice;
    cout << "Enter account holder's name: ";
    string name;
    cin >> name;
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    account newAccount(name, initialBalance);

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
                } else if (amount > newAccount.balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    newAccount.balance -= amount;
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
                    newAccount.balance += amount;
                    cout << "Deposit successful.\n";
                }
                break;
            }

            case 3:
                cout << "Current balance: " << newAccount.balance << '\n';
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
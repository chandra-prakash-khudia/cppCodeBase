#include <iostream>
using namespace std;
int main() {
    double balance = 1000.0; 

    while (true) {
        int choice;

        cout << "ATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: " << balance << endl;
                break;

            case 2:
                double withdrawAmount;
                cout << "Enter the amount to withdraw: $";
                cin >> withdrawAmount;

                if (withdrawAmount > 0 && withdrawAmount <= balance) {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful. New balance is: " << balance << endl;
                } else {
                    cout << "Invalid withdrawal amount or insufficient balance." << endl;
                }
                break;

            case 3:
                double depositAmount;
                cout << "Enter the amount to deposit: ";
                cin >> depositAmount;

                if (depositAmount > 0) {
                    balance += depositAmount;
                    cout << "Deposit successful. New balance is: $" << balance << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
				return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }
}

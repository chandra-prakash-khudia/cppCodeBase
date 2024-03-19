#include <iostream>
#include <string>
using namespace std;
class Account {
protected:
    string accountHolder;
    double balance;
public:
    Account(string holder, double initialBalance){
        this->accountHolder = holder;
        this->balance = initialBalance;
    }

    virtual double calculateInterest() const {
        return 0.0;
    }

    virtual ~Account() {}

    void displayInterest() const {
        cout << "The interest for " << accountHolder << "'s account is " << calculateInterest() << endl;
    }
};
class SavingsAccount : public Account {
private:
    double interestRate; 
public:
    SavingsAccount( string holder, double initialBalance, double rate)
        : Account(holder,initialBalance){
            interestRate = rate;
        }
    double calculateInterest() const override {
        return balance * (interestRate / 100);
    }
};
class CurrentAccount : public Account {
public:
    CurrentAccount(string holder, double initialBalance)
        : Account(holder, initialBalance) {}

    double calculateInterest() const override {
        return 0.0;
    }
};
class FixedDepositAccount : public Account {
private:
    double interestRate; 
    int termLength;
public:
    FixedDepositAccount(string holder, double initialBalance, double rate, int term)
        : Account(holder, initialBalance){
            this->interestRate = rate;
            this->termLength =term;
        }
    double calculateInterest() const override {
        return balance * (interestRate / 100) * termLength;
    }
};
int main() {
    SavingsAccount savings("Ratan Tata", 1000, 2); 
    CurrentAccount current("Ambani", 2000); 
    FixedDepositAccount fixed("adani", 5000, 5, 3); 
    savings.displayInterest();
    current.displayInterest();
    fixed.displayInterest();
}

#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;
public:
    BankAccount(int accNum, string accHolderName) {
        accountNumber = accNum;
        accountHolderName = accHolderName;
        balance = 0.0;
    }
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

    void displayAccountInfo() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

};
int main() {
    BankAccount account1(1001, "John Doe");
    account1.deposit(500);
    account1.withdraw(200);
    account1.displayAccountInfo();

    BankAccount account2(1002, "Jane Smith");
    account2.deposit(1000);
    account2.displayAccountInfo();  

    return 0;
}
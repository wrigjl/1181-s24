#include <iostream>
#include <vector>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Transaction {
    struct Date date;
    string description;
    int amount;
};

struct BankAccount {
    int total;
    string owner;
    int accountNumber;
    vector<Transaction> transactions;

    // bank account must be created with: owner, total, and accountNumber
    // ... how do we do that?
    BankAccount(int initialAmount, string theOwner, int acctNum);

    void deposit(Date date, int amount, string description);
    void withdraw(Date date, int amount, string description);
};

BankAccount::BankAccount(int initialAmount, string theOwner, int acctNum) {
    total = initialAmount;
    owner = theOwner;
    accountNumber = acctNum;
}

void BankAccount::deposit(Date date, int amount, std::string description) {
    //total goes up;
    total = total + amount;

    //add a new transaction
    Transaction transaction = {date, description, amount};
    transactions.push_back(transaction);
}
void printTheAnswer();


int main() {
    BankAccount myAccount(50, "Jason", 42);
    cout << "The owner is: " << myAccount.owner
         << " how much " << myAccount.total << endl;
    cout << "There are " << myAccount.transactions.size() << " transactions" << endl;

    myAccount.deposit({4, 9, 2024}, 1000000000, "Dr. Evil payment");

    cout << "the end." << endl;
}

void
printTheAnswer() {
    cout << 42 << endl;
}

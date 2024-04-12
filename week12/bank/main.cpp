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

int findTransaction(const BankAccount& account, const string& needle) {
    // go through the transactions, see if "needle" exists as a description
    // if found, return it's index... if not, return -1
    for (int i = 0; i < int(account.transactions.size()); i++) {
        if (account.transactions[i].description == needle) {
            return i;
        }
    }
    return -1;
}
int findTransactionBinary(const BankAccount& account, const string& needle) {
    int low, mid, hi;

    low = 0;
    hi = account.transactions.size() - 1;
    while (low <= hi) {
        cout << "Low: " << low << " High: " << hi << endl;
        mid = low + (hi - low) / 2;
        cout << "N: " << needle <<  " X: " << account.transactions[mid].description << endl;
        if (account.transactions[mid].description == needle)
            return mid;
        if (needle > account.transactions[mid].description) {
            // what we're looking for is "to the left"
            low = mid + 1;
        } else {
            // what we're looking for is "to the right"
            hi = mid - 1;
        }
    }
    return -1;
}
int main() {
    BankAccount myAccount(50, "Jason", 42);
    cout << "The owner is: " << myAccount.owner
         << " how much " << myAccount.total << endl;
    cout << "There are " << myAccount.transactions.size() << " transactions" << endl;

    myAccount.deposit({4, 9, 2024}, 1000000000, "A");
    myAccount.deposit({4, 9, 2024}, 1000000000, "B");
    myAccount.deposit({4, 9, 2024}, 1000000000, "C");
    myAccount.deposit({4, 9, 2024}, 1000000000, "D");
    myAccount.deposit({4, 9, 2024}, 1000000000, "E");
    myAccount.deposit({4, 9, 2024}, 1000000000, "F");
    myAccount.deposit({4, 9, 2024}, 1000000000, "F");
    myAccount.deposit({4, 9, 2024}, 1000000000, "G");
    myAccount.deposit({4, 9, 2024}, 1000000000, "H");
    myAccount.deposit({4, 9, 2024}, 1000000000, "I");
    myAccount.deposit({4, 9, 2024}, 1000000000, "J");
    myAccount.deposit({4, 9, 2024}, 1000000000, "K");
    myAccount.deposit({4, 9, 2024}, 1000000000, "L");
    myAccount.deposit({4, 9, 2024}, 1000000000, "M");
    myAccount.deposit({4, 9, 2024}, 1000000000, "N");
    myAccount.deposit({4, 9, 2024}, 1000000000, "O");
    myAccount.deposit({4, 9, 2024}, 1000000000, "P");
    myAccount.deposit({4, 9, 2024}, 1000000000, "Q");
    myAccount.deposit({4, 9, 2024}, 1000000000, "R");
    myAccount.deposit({4, 9, 2024}, 1000000000, "S");
    myAccount.deposit({4, 9, 2024}, 1000000000, "T");
    myAccount.deposit({4, 9, 2024}, 1000000000, "U");
    myAccount.deposit({4, 9, 2024}, 1000000000, "V");
    myAccount.deposit({4, 9, 2024}, 1000000000, "W");
    myAccount.deposit({4, 9, 2024}, 1000000000, "X");
    myAccount.deposit({4, 9, 2024}, 1000000000, "Y");
    myAccount.deposit({4, 9, 2024}, 1000000000, "Z");

    cout << findTransaction(myAccount, "X") << endl;
    cout << findTransaction(myAccount, "NOT FOUND") << endl;
    cout << findTransactionBinary(myAccount, "X") << endl;
    cout << findTransactionBinary(myAccount, "NOT THERE") << endl;

    cout << "the end." << endl;
}

void
printTheAnswer() {
    cout << 42 << endl;
}

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

void MyCoolFunction() {
    cout << "Yes." << endl;
}

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int _day, int _month, int _year);

    int getDay() const {
        return day;
    }

    // what is INVARIANT ?
    void setDay(int day) {
        assert(day > 0);
        assert(day <= 31);
        Date::day = day;
    }

    int getMonth() const {
        return month;
    }

    void setMonth(int month) {
        assert(month > 0);
        assert(month <= 12);
        Date::month = month;
    }

    int getYear() const {
        return year;
    }

    void setYear(int year) {
        Date::year = year;
    }

    void printDate() {
        cout << year << "-" << month << "-" << day;
    }
};

struct Transaction {
    Date date;
    string description;
    int amount;
};

class BankAccount {
private:
    int total;
private:
    string owner;
    int accountNumber;
public:
    vector<Transaction> transactions;

public:
    // bank account must be created with: owner, total, and accountNumber
    // ... how do we do that?
    BankAccount(int initialAmount, string theOwner, int acctNum);

    void deposit(Date date, int amount, string description);
    void withdraw(Date date, int amount, string description);
    void printSummary();
private:
    void addTransaction(Date date, int amount, std::string description);

};

BankAccount::BankAccount(int initialAmount, string theOwner, int acctNum) {
    total = initialAmount;
    owner = theOwner;
    accountNumber = acctNum;
}

void BankAccount::addTransaction(Date date, int amount, std::string description) {
    total = total + amount;

    //add a new transaction
    Transaction transaction = {date, description, amount};
    transactions.push_back(transaction);
}

void BankAccount::deposit(Date date, int amount, std::string description) {
    addTransaction(date, amount, description);
}

void BankAccount::withdraw(Date date, int amount, std::string description) {
    addTransaction(date, -amount, description);
}

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

Date::Date(int _day, int _month, int _year) {
    day = _day;
    month = _month;
    year = _year;
}

void BankAccount::printSummary() {
    cout << "The owner is: " << owner
         << " how much " << total << endl;
    cout << "There are " << transactions.size() << " transactions" << endl;
}

int main() {
    Date date1(23, 4, 2024);
    //date1.setDay(59);
    date1.printDate();
    cout << endl;

    Date date3(23, 4, 2024);

    //cout << date3.month;
    //date3.month = 42;
    date3.setMonth(42);

//    BankAccount myAccount(50, "Jason", 42);
//    myAccount.printSummary();

    // doesn't work: private member function
    //myAccount.addTransaction({4, 9, 2024}, 1000000000, "A");

    //myAccount.deposit({4, 9, 2024}, 1000000000, "A");

    cout << "the end." << endl;
}

void
printTheAnswer() {
    cout << 42 << endl;
}

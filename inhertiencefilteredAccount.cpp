#include <bits/stdc++.h>
using namespace std;

class Account {
private:
    int accountNumber;
public:
    Account(int accno) : accountNumber(accno) {}

    virtual bool process(Transaction t) {
        cout << "Processing transaction of value: " << t.value() << " for account " << accountNumber << endl;
        return true;
    }

    int getAccountNumber() const {
        return accountNumber;
    }
};

class Transaction {
private:
    int transactionValue;
public:
    Transaction(int value) : transactionValue(value) {}

    int value() const {
        return transactionValue;
    }
};

class FilteredAccount : public Account {
private:
    int filteredCount = 0; 

public:
    FilteredAccount(int accno) : Account(accno) {}

    bool process(Transaction t) override {
        if (t.value() == 0) {
            filteredCount++;
            return true;
        }
        return Account::process(t);  
    }

    int filtered() const {
        return filteredCount;
    }
};

int main() {
    Transaction t1(0); // Value 0
    Transaction t2(100); // Value 100
    Transaction t3(0); // Value 0

    FilteredAccount filteredAcc(12345);

    filteredAcc.process(t1);
    filteredAcc.process(t2);
    filteredAcc.process(t3);

    cout << "Filtered transactions count: " << filteredAcc.filtered() << endl;

    return 0;
}

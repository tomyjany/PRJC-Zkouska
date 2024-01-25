#include <iostream>
#include <string>
#include <vector>
using namespace std;
// Vsimnete si, ze nemame zadnou classu banky, protoze kodime pro konkretni banku uz konkretni fce
// eventuelne by banka mela proste vector Accountu a vector Transakci
// Ja jsem ve zkousce objekt banky vubec nedaval





// interface pro notifikace
class Notification
{
public:
    virtual void notify(string text) = 0;
};

// Objekt uctu
class Account
{
private:
    string account_number;
    vector<Notification *> nots;
    int bal;

public:
    Account(string _account_number);
    void notify(string text);
    void addNotification(Notification *n);
    void setBal(int amount);

    //tohle uz neni nutnost
    void showBalance();
    string getAccountNumber();
};





// interface pro Transakce
class Transaction
{
public:
    virtual void transfer(Account *acc, int amount) = 0;
};

// Polymorfismus Transakci
class Card : public Transaction
{
public:
    void transfer(Account *acc, int amount);
};

class GooglePay : public Transaction
{
public:
    void transfer(Account *acc, int amount);
};



// Polymorfismus notifikaci
class Phone : public Notification
{
private:
    string phone_number;

public:
    Phone(string _phone_number);
    void notify(string text);
};

class Email : public Notification
{
private:
    string email_address;

public:
    Email(string _email_address);
    void notify(string text);
};

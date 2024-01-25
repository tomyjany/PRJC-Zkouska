#include "bank.hpp"
using namespace std;
//zde je metoda, ktera posila oznameni (specifikovana v zadani)
void Account::addNotification(Notification * n){
    this->nots.push_back(n);
};
void Account::notify(string text){
    for(Notification * n : this->nots){
        n->notify(text);

    }
};


// Tyhle metody jsem tam napsal take
//metody pro transfer
void Card::transfer(Account * acc, int amount){
    acc->setBal(amount-100);
    string msg = string("Transfering via Card ") + string(to_string(amount));
    acc->notify(msg);

 
};
// implenetace notifikaci
void Phone::notify(string text){
    cout<<"Messaging " << this->phone_number << " message "<< text << endl;
    //zde by byla implementace poslani na telefoni cislo

};




// *************************************************
// *************************************************
// to co je pod timto komentarem VE ZKOUSCE BYT NEMA
// *************************************************
// *************************************************

//konstruktory
Phone::Phone(string _phone_number):phone_number(_phone_number){

};
Email::Email(string _email_address):email_address(_email_address){

};
Account::Account(string _account_number):account_number(_account_number),bal(0){

};

void Email::notify(string text){
    cout<<"Emailing " << this->email_address << " message :" << text << endl;
    //zde by byla implementace poslani na email
};

//metody pro account
void Account::showBalance(){
    cout<<"Balance of account " << this->account_number << " is " << this->bal<< endl;
};
void Account::setBal(int amount){
    this->bal = this->bal + amount; 
};
string Account::getAccountNumber(){
    return this->account_number;
};

void GooglePay::transfer(Account * acc, int amount){
    acc->setBal(amount-200);
    string msg = string("Transfering via GoogglePay ") + string(to_string(amount));
    acc->notify(msg);
};

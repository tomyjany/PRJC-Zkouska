#include "bank.hpp"
#include <iostream>
// zde je jak by program fungoval
int main(){
    Account * tom = new Account("1");
    tom->addNotification(new Phone("123 456 789"));
    tom->addNotification(new Email("tomas.krakovec@tul.cz"));
    tom->showBalance();
    Transaction * card = new Card();
    Transaction * google = new GooglePay();
    card->transfer(tom, 2000);
    tom->showBalance();
    google->transfer(tom,5000);
    tom->showBalance();




    

    return 0;
}
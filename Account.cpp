#include "Account.h"


Account::Account() {
    name = "Unnamed Account";
    balance = 0;
    dollars = 0;
    euros = 0;
    tenge = 0;
}

Account::Account(string name, double dollars, double euros, double tengeler) : name(name),
dollars(dollars), euros(euros), tenge(tenge) {}

void Account::recalculate_balance() {
    balance = (dollars * 425) + (euros * 495) + (tenge);
}

void Account::printBalance() {
    cout << "Total balance is " << balance << "\n Dollars: " << dollars << ", euros: " << euros << ", tenge: " << tenge << endl;
}
#include "CheckingAccount.h"
CheckingAccount::CheckingAccount() {

}

CheckingAccount::CheckingAccount(string name, double dollars, double euros, double tenge) {
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTenge(tenge);
    recalculate_balance();
}

void CheckingAccount::deposit(double add_money) {
    cout << name << ", choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
    case 1: dollars = dollars + add_money;
        break;

    case 2: euros += euros + add_money;
        break;

    case 3: tenge += tenge + add_money;
        break;
    }
    recalculate_balance();
}

void CheckingAccount::withdraw(double w_value) {
    cout << "Choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    int choice;
    cin >> choice;
    switch (choice) {
    case 1: dollars = dollars - (w_value * ((100 + fee) / 100));
        break;

    case 2: euros = euros - (w_value * ((100 + fee) / 100));
        break;

    case 3: tenge = tenge - (w_value * ((100 + fee) / 100));
        break;
    }
    recalculate_balance();
}

void CheckingAccount::deposit(double add_money, int choice) {
    switch (choice) {
    case 1: dollars += add_money;
        break;

    case 2: euros += add_money;
        break;

    case 3: tenge += add_money;
        break;
    }
    recalculate_balance();
}

void CheckingAccount::printBalance() {
    cout  << name << "\nTotal balance is " << balance << "\nDollars: " << dollars << ", euros: " << euros << ", tenge: " << tenge << ", fee: " << fee << endl;
}
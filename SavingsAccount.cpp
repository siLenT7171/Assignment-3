#include "SavingsAccount.h"

SavingsAccount::SavingsAccount() {

}

SavingsAccount::SavingsAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge) :interest_rate_dollar(interest_rate_dollar), interest_rate_euro(interest_rate_euro), interest_rate_tenge(interest_rate_tenge) {
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTenge(tenge);
    recalculate_balance();
}

void SavingsAccount::deposit(double add_money) {
    cout << name << ", choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    
    int choice;
    cin >> choice;
    
    switch (choice) {
    case 1: dollars = dollars * (1 + interest_rate_dollar / 100) + add_money;
        break;

    case 2: euros = euros * (1 + interest_rate_euro / 100) + add_money;
        break;

    case 3: tenge = tenge * (1 + interest_rate_tenge / 100) + add_money;
        break;
    }
    recalculate_balance();
}

void SavingsAccount::deposit(double add_money, int choice) {
    switch (choice) {
    case 1: dollars = dollars * (1 + interest_rate_dollar / 100) + add_money;
        break;

    case 2: euros = euros * (1 + interest_rate_euro / 100) + add_money;
        break;

    case 3: tenge = tenge * (1 + interest_rate_tenge / 100) + add_money;
        break;
    }
    recalculate_balance();
}

void SavingsAccount::withdraw(double w_value) {
    cout << "choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    
    int choice;
    cin >> choice;
    
    switch (choice) {
    case 1: dollars = dollars - w_value;
        break;

    case 2: euros = euros - w_value;
        break;

    case 3: tenge = tenge - w_value;
        break;
    }
    recalculate_balance();
}

void SavingsAccount::printBalance() {
    cout << name << "\nTotal balance is " << balance << "\nDollars: " << dollars << ", euros: " << euros << ", tenge: " << tenge <<
        "\nInterest rates: "  << " dollars: " << interest_rate_dollar << ", euros " << interest_rate_euro << ", tenge " << interest_rate_tenge << endl;
}
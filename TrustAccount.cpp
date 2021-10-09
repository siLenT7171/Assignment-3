#include "TrustAccount.h"
#include <iostream>
using namespace std;


TrustAccount::TrustAccount() {};

TrustAccount::TrustAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge) {
    setName(name);
    setDollars(dollars);
    setEuros(euros);
    setTenge(tenge);
    setInterestRateDollar(interest_rate_dollar);
    setInterestRateEuro(interest_rate_euro);
    setInterestRateTenge(interest_rate_tenge);
    recalculate_balance();
}

void TrustAccount::deposit(double add_money, int choice) {
    switch (choice) {
    case 1: if (add_money > 1000) {
        dollars += 10;
        cout << name << ", you've received a bonus +10!" << endl;
    }
          dollars = dollars * (1 + (interest_rate_dollar / 100)) + add_money;
          break;

    case 2: if (add_money > 1000) {
        euros += 10;
        cout << name << ", you've received a bonus +10!" << endl;
    }
          euros = euros * (1 + (interest_rate_euro / 100)) + add_money;
          break;

    case 3: if (add_money > 1000) {
        tenge += 10;
        cout << name << ", you've received a bonus +10!" << endl;
    }
          tenge = tenge * (1 + (interest_rate_tenge / 100)) + add_money;
          break;
    }
    recalculate_balance();
}

void TrustAccount::deposit(double add_money) {
    cout << name << ", choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    
    int choice;
    cin >> choice;
    
    deposit(add_money, choice);
}

void TrustAccount::withdraw(double w_value) {
    cout << "Choice the currency: \n 1 = dollars     2 = euros     3 = tenge" << endl;
    
    int choice;
    double minimum;
    cin >> choice;
    
    switch (choice) {
    case 1:
        minimum = dollars * 0.2;
        if (minimum < w_value) {
            cout << "The amount of withdraw is more than 20% of a balance" << endl;
        }
        else
            dollars -= w_value;
        break;

    case 2: minimum = euros * 0.2;
        if (minimum < w_value) {
            cout << "The amount of withdraw is more than 20% of a balance" << endl;
        }
        else
            euros -= w_value;
        break;

    case 3: minimum = tenge * 0.2;
        if (minimum < w_value) {
            cout << "The amount of withdraw is more than 20% of a balance" << endl;
        }
        else
            tenge -= w_value;
        break;
    }
    recalculate_balance();
}


void TrustAccount::printBalance() {
    cout  << name << "\nTotal balance is " << balance << "\nDollars: " << dollars << ", euros: " << euros << ", tenge: " << tenge <<
        "\nInterest rates: " << " dollars: " << interest_rate_dollar << ", euros " << interest_rate_euro << ", tenge " << interest_rate_tenge << endl;
}
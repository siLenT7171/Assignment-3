#pragma once

#include <string>
#include "I_Printable.h"
#include <iostream>
using namespace std;

class Account : public I_Printable {
protected:
    string name;
    double balance, dollars, euros, tenge;

public:
    Account();
    Account(string name, double dollars, double euros, double tenge);

    virtual void deposit(double add_money) = 0;

    virtual void withdraw(double withdraw_number) = 0;

    virtual void deposit(double withdraw_number, int choice) = 0;

    void recalculate_balance();

    void printBalance();

    void setName(const string& name) { this->name = name; }

    void setBalance(double balance) { this->balance = balance; }

    void setDollars(double dollars) { this->dollars = dollars; }

    void setEuros(double euros) { this->euros = euros; }

    void setTenge(double tenge) { this->tenge = tenge; }
};
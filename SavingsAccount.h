#pragma once

#include "Account.h"


class SavingsAccount : public Account {
protected:
    double interest_rate_dollar, interest_rate_euro, interest_rate_tenge;

public:
    SavingsAccount();
    SavingsAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    
    virtual void deposit(double add_money) override;
    virtual void deposit(double add_money, int choice) override;
    virtual void withdraw(double w_value) override;
    
    void printBalance() override;

    void setInterestRateDollar(double interestRateDollar) { this->interest_rate_dollar = interestRateDollar; }

    void setInterestRateEuro(double interestRateEuro) { this->interest_rate_euro = interestRateEuro; }

    void setInterestRateTenge(double interestRateTenge) { this->interest_rate_tenge = interestRateTenge; }

};
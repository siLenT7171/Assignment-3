#pragma once

#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount {
public:
    TrustAccount();
    TrustAccount(string name, double dollars, double euros, double tenge, double interest_rate_dollar, double interest_rate_euro, double interest_rate_tenge);
    
    virtual void deposit(double add_money) override;
    virtual void deposit(double w_value, int choice) override;
    virtual void withdraw(double w_value) override;
    
    void printBalance() override;
};
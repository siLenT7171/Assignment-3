#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include <vector>
using namespace std;

class Redistribute {
public:
    void redistribute(vector <Account*>& Accounts, double tenge) {

        int number_of_accounts = Accounts.size();

        double tenge_to_each = tenge / number_of_accounts;

        for (int i = 0; i < number_of_accounts; i++) {
            Accounts[i]->deposit(tenge_to_each, 3);

            cout << "Distribution for each account: " << tenge_to_each << endl;
        }
    }

};


int main() {
    vector <Account*> Accounts;

    Account* Mozart = new SavingsAccount("Mozart", 100, 20, 30000, 0.1, 0.1, 0.2);
    Mozart->deposit(1000);
    Mozart->printBalance();

    cout << "\n\n\n";

    Account* Chopin = new CheckingAccount("Chopin", 10, 0, 10000);
    Chopin->deposit(500);
    Chopin->printBalance();

    cout << "\n\n\n";

    Account* Liszt = new TrustAccount("Liszt", 0, 0, 0, 0.0, 0.0, 0.0);
    Liszt->deposit(2000);
    Liszt->withdraw(200);
    Liszt->printBalance();

    Accounts.push_back(Mozart);
    Accounts.push_back(Chopin);
    Accounts.push_back(Liszt);
    
    Redistribute redistribution;
    redistribution.redistribute(Accounts, 300);

    cout << "\n\n\n";

    Mozart->printBalance();

    cout << "\n\n\n";

    Chopin->printBalance();

    cout << "\n\n\n";

    Liszt->printBalance();

    cout << "\n\n\n";

    SavingsAccount Account1 = SavingsAccount("Account1", 10, 5, 1000, 0.2, 0.2, 0.2);
    Account1.printBalance();

    return 0;
}